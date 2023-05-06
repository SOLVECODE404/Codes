let searchBox = document.getElementById("searchBox");
let query = document.querySelector(".querys");
let searchBtn = document.querySelector(".searchBtn");
document.getElementById("inputBox").value = "";
document.getElementById("inputBox").focus();
searchBtn.onclick = function () {
  let url = "https://www.google.com/search?q=" + query.value;
  window.open(url, "_self");
};