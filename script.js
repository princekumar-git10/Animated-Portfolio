// SIMPLE ANIMATION ON LOAD

window.addEventListener("load", () => {
  const title = document.querySelector(".hero-title");
  const img = document.querySelector(".hero-img");
  const tags = document.querySelectorAll(".tags span");

  // Text animation
  title.style.opacity = 0;
  title.style.transform = "translateY(50px)";

  setTimeout(() => {
    title.style.transition = "1s ease";
    title.style.opacity = 1;
    title.style.transform = "translateY(0)";
  }, 200);

  // Image animation
  img.style.opacity = 0;
  img.style.transform = "scale(1.1)";

  setTimeout(() => {
    img.style.transition = "1.5s ease";
    img.style.opacity = 1;
    img.style.transform = "scale(1)";
  }, 400);

  // Tags animation
  tags.forEach((tag, i) => {
    tag.style.opacity = 0;
    tag.style.transform = "translateY(20px)";

    setTimeout(() => {
      tag.style.transition = "0.5s ease";
      tag.style.opacity = 1;
      tag.style.transform = "translateY(0)";
    }, 600 + i * 100);
  });
});


document.addEventListener("DOMContentLoaded", () => {
  const menuBtn = document.querySelector(".menu");
  const menu = document.getElementById("menu");
  // Select all links inside the menu
  const menuLinks = document.querySelectorAll(".menu-overlay ul li a");

  // --- TOGGLE MENU (Your original logic) ---
  menuBtn.addEventListener("click", () => {
    menu.classList.toggle("active");

    if (menu.classList.contains("active")) {
      menuBtn.innerHTML = "Close ✕";
    } else {
      menuBtn.innerHTML = "Menu ☰";
    }
  });

  // --- AUTO-CLOSE ON LINK CLICK (New logic) ---
  menuLinks.forEach(link => {
    link.addEventListener("click", () => {
      // 1. Remove the active class to hide the menu
      menu.classList.remove("active");

      // 2. Reset the button text back to "Menu"
      menuBtn.innerHTML = "Menu ☰";
    });
  });
});

// reveal on scroll
const elements = document.querySelectorAll('.about-text, .about-img');

window.addEventListener('scroll', () => {
  elements.forEach(el => {
    const pos = el.getBoundingClientRect().top;
    if (pos < window.innerHeight - 100) {
      el.classList.add('show');
    }
  });
});




// ANIMATION FOR ABOUT ME SECTION
window.addEventListener("load", () => {
  // 1. Select the new elements from the About Section
  const bgTitles = document.querySelectorAll(".bg-title-text"); // The giant "ABOUT ME"
  const portrait = document.querySelector(".main-portrait");    // Your face image
  const bioText = document.querySelector(".sub-text");         // The description
  const pills = document.querySelectorAll(".pill");            // The tech tags

  // --- Background Text Animation (Fade In + Spread) ---
  bgTitles.forEach((title, i) => {
    title.style.opacity = 0;
    title.style.transform = "translateY(30px) scale(0.9)";
    
    setTimeout(() => {
      title.style.transition = "1.2s cubic-bezier(0.2, 0.8, 0.2, 1)";
      title.style.opacity = 1;
      title.style.transform = "translateY(0) scale(1)";
    }, 200 + (i * 200));
  });

  // --- Portrait Animation (Scale Up) ---
  if(portrait) {
    portrait.style.opacity = 0;
    portrait.style.transform = "scale(0.8) translateY(20px)";

    setTimeout(() => {
      portrait.style.transition = "1.5s ease-out";
      portrait.style.opacity = 1;
      portrait.style.transform = "scale(1) translateY(0)";
    }, 600);
  }

  // --- Bio Description Animation (Slide Up) ---
  if(bioText) {
    bioText.style.opacity = 0;
    bioText.style.transform = "translateY(20px)";

    setTimeout(() => {
      bioText.style.transition = "1s ease";
      bioText.style.opacity = 1;
      bioText.style.transform = "translateY(0)";
    }, 900);
  }

  // --- Tech Pills Animation (Staggered Load) ---
  pills.forEach((pill, i) => {
    pill.style.opacity = 0;
    pill.style.transform = "translateY(15px)";

    setTimeout(() => {
      pill.style.transition = "0.6s ease";
      pill.style.opacity = 1;
      pill.style.transform = "translateY(0)";
    }, 1100 + (i * 100));
  });
});