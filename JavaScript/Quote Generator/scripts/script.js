window.addEventListener("load", initFunctions);

//global variables for maniuplating DOM
const quoteText = document.querySelector("#quote");
const authorText = document.querySelector("#author");

//to initate calling mechanism of functions
function initFunctions() {
  document
    .querySelector("#newquote")
    .addEventListener("click", getQuoteFromApi);
  document
    .querySelector("#twitter")
    .addEventListener("click", tweetQuoteUsingApi);
}

//to get a new quote from the function
function getQuoteFromApi() {
  const proxyUrl = "https://sj-proxy-server.herokuapp.com/";
  const apiUrl = "http://quotes.stormconsultancy.co.uk/random.json";

  if (window.fetch) {
    let promise = fetch(proxyUrl + apiUrl);
    promise
      .then((response) => {
        response
          .json()
          .then((data) => {
            //console.log(data);
            printQuoteToScreen(data);
          })
          .catch((err) => console.error("Invalid JSON!"));
      })
      .catch((err) => {
        console.error("Encountered an error ", err);
      });
  } else {
    console.error("fetxh is not supported kindly upgrade your browser!");
  }
}

//to print quote to the console
function printQuoteToScreen(data) {
  if (data.quote.length > 120) {
    quoteText.classList.add("long-text");
  } else {
    quoteText.classList.remove("long-text");
  }
  quoteText.innerText = data.quote;
  authorText.innerText = data.author;
}

function tweetQuoteUsingApi() {
  const tweet = quoteText.innerText;
  const author = authorText.innerText;
  const twitterUrl = `https://twitter.com/intent/tweet?text=${tweet} - ${author}`;
  window.open(twitterUrl, "_blank");
}
