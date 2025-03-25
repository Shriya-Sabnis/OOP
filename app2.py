from flask import Flask, request, jsonify, render_template
import google.generativeai as genai

# Configure the Gemini API key
GEMINI_API_KEY = "AIzaSyDcSxdqshP-YfkIHHaWUtd4W-oy2vFVkQs"  # Replace with your actual API key
genai.configure(api_key=GEMINI_API_KEY)

# Define the model to use
MODEL_NAME = "gemini-1.5-flash"  # Using an available model from your list

app = Flask(_name_)

# Simulated function to get predicted attributes from the backend
# Replace this function with actual API calls to your friend's backend
def get_predictions_from_backend():
    # Example: Replace this with real data fetching from the backend
    return {
        "body_shape": "hourglass",
        "face_shape": "oval",
        "skin_tone": "warm"
    }

def get_fashion_advice(user_query):
    """Generates fashion advice based on predicted attributes and user query."""
    
    # Fetch predictions from the backend
    attributes = get_predictions_from_backend()
    
    prompt = f"""
    You are a fashion expert. Provide a brief and stylish outfit recommendation.
    User's attributes:
    - Body Shape: {attributes['body_shape']}
    - Face Shape: {attributes['face_shape']}
    - Skin Tone: {attributes['skin_tone']}
    
    The user asks: {user_query}
    Give a short and practical fashion tip.
    """

    # Send request to Gemini API
    model = genai.GenerativeModel(MODEL_NAME)
    response = model.generate_content(prompt)

    return response.text.strip() if response else "Sorry, I couldn't generate a response."

@app.route("/", methods=["GET", "POST"])
def home():
    if request.method == "POST":
        user_query = request.form.get("user_query", "").strip()
        if user_query:
            response = get_fashion_advice(user_query)
            return jsonify({"response": response})
    
    return render_template("index.html")

if _name_ == "_main_":
    app.run(debug=True)