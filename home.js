document.getElementById('loginForm').addEventListener('submit', function(event) {
    event.preventDefault(); // Stop the page from reloading

    const user = document.getElementById('username').value;
    const pass = document.getElementById('password').value;
    const message = document.getElementById('message');

    // Simple hardcoded validation for demonstration
    if (user === "admin" && pass === "1234") {
        message.style.color = "green";
        message.textContent = "Login successful! Redirecting...";
        
        // In a real app, you'd use window.location.href = "dashboard.html";
    } else {
        message.style.color = "red";
        message.textContent = "Invalid username or password.";
    }
});