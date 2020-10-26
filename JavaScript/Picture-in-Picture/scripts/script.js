window.addEventListener("load", initFunction);

const button = document.querySelector("#button");
const videoElement = document.querySelector("#video");

function initFunction() {
  selectMediaStream();
  button.addEventListener("click", async () => {
    //Disable button
    button.disabled = true;
    //Start Picture in picture
    await videoElement.requestPictureInPicture();
    //Enable Button
    button.disabled = false;
  });
}

// Prompt to select media stream, pass to video element, then play
async function selectMediaStream() {
  try {
    const mediaStream = await navigator.mediaDevices.getDisplayMedia();
    videoElement.srcObject = mediaStream;
    videoElement.onloadedmetadata = () => {
      videoElement.play();
    };
  } catch (error) {
    console.error("Encountered an error while accessing ", error);
  }
}
