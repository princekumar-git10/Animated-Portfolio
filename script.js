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