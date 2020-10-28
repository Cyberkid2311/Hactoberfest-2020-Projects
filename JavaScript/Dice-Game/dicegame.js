var player1 = prompt("Enter player 1 name:");
document.querySelectorAll('p')[0].innerHTML = player1;

var player2 = prompt("Enter player 2 name:");
document.querySelectorAll('p')[1].innerHTML = player2;

let randomInt1 = Math.floor(Math.random()*6+ 1);
document.querySelectorAll('img')[0].setAttribute("src","images/dice" + randomInt1 + ".png")

let randomInt2 = Math.floor(Math.random()*6+ 1);
document.querySelectorAll('img')[1].setAttribute("src","images/dice" + randomInt2 + ".png")

if(randomInt1 > randomInt2){
  document.querySelector('h1').innerHTML = "✔" + player1 + " Won";
}
else if (randomInt1 < randomInt2) {
  document.querySelector('h1').innerHTML = player2 + " Won✔";
}
else {
  document.querySelector('h1').innerHTML = "Game tied";
}
