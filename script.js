document.addEventListener("DOMContentLoaded", function () {
    const hireMeButton = document.querySelector("#hero button");
    const downloadCVButton = document.querySelector("#about button");
    
    hireMeButton.addEventListener("click", function () {
        alert("Thank you for your interest! Contact me at coder@example.com");
    });
    
    downloadCVButton.addEventListener("click", function () {
        window.location.href = "cv/Shasika_Shehan_CV.pdf"; // Ensure the CV is placed in the 'cv' folder
    });
});
