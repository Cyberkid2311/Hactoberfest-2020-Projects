window.addEventListener("load", loadImagesFromApi);

//global Variables for DOM Manipulation
const imageContainer = document.querySelector("#image-container");
const loaderImage = document.querySelector("#loader");

let totalImages = 0;
let imagesLoaded = 0;
let ready = false;
let imagesArray = [];

//to fetch images from Unsplash API
async function loadImagesFromApi() {
  const count = 30;
  const apiKey = "u7yu057qlT_6DKnCa0NKXh1b8PjzXJx1-hE2WCv7bto";
  const apiUrl = `https://api.unsplash.com/photos/random?client_id=${apiKey}&count=${count}`;

  if (window.fetch) {
    try {
      const response = await fetch(apiUrl);
      imagesArray = await response.json();
      displayImages();
    } catch (error) {
      console.error("Encountered some error ", error);
    }
  } else {
    console.error("Update your browser fetch is not supported.");
  }
}

//to populate images into the main screen via DOM
function displayImages() {
  imagesLoaded = 0;
  totalImages = imagesArray.length;
  imagesArray.forEach((photo) => {
    //create link element of image
    const item = document.createElement("a");
    setAttributes(item, {
      href: photo.links.html,
      target: "_blank",
    });
    //create image element
    const image = document.createElement("img");
    setAttributes(image, {
      src: photo.urls.regular,
      alt: photo.alt_description,
      title: photo.alt_description,
    });
    //add eventlistener to image loading
    image.addEventListener("load", imageLoaded);

    //append child images to DOM
    item.appendChild(image);
    imageContainer.appendChild(item);
  });
}

//to setAttributes of passed element
function setAttributes(element, property) {
  for (let key in property) {
    element.setAttribute(key, property[key]);
  }
}

//trigger imageload function to implement infiniteScrollEffect
window.addEventListener("scroll", () => {
  if (
    window.innerHeight + window.scrollY >= document.body.offsetHeight - 1000 &&
    ready
  ) {
    ready = false;
    loadImagesFromApi();
  }
});

//to check if all images were loaded up
function imageLoaded() {
  imagesLoaded++;
  if (imagesLoaded === totalImages) {
    ready = true;
    loaderImage.hidden = true;
  }
}
