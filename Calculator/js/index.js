

function getValue(id) {
  let getValue = document.getElementById(id).value; //get the value of specific id
  let getoldValue = document.getElementById("answer").innerText; //get the value from inputfield
  let valueArray = getoldValue.split(""); //convert to array

  if (valueArray[0] == 0 && valueArray[1] != ".") {
    valueArray.shift(); //remove the first value in arrat valueArray
  }
  let updateValue = valueArray.join("");
  let currentValue = updateValue.concat(getValue); // join the two string

  document.getElementById("answer").innerText = currentValue;
  document.getElementById("sub").disabled = false;
  document.getElementById("add").disabled = false;
  document.getElementById("div").disabled = false;
  document.getElementById("mul").disabled = false;
  document.getElementById("per").disabled = false;
  document.getElementById("zero").disabled = false;
}

function zero() {
  let getValue = document.getElementById("zero").value; //get the value of specific id
  let getoldValue = document.getElementById("answer").innerText; //get the value
  try {
    let getoperationSeparate = getoldValue.split(/[+\-*/]/);
    let btn_zero = true;

    if (
      getoperationSeparate[getoperationSeparate.length - 1][0].includes("0") &&
      getoperationSeparate[getoperationSeparate.length - 1][1] == "."
    ) {
      btn_zero = false;
      document.getElementById("answer").innerText = getoldValue + getValue;
    } else if (
      getoperationSeparate[getoperationSeparate.length - 1][0].includes("0") &&
      getoperationSeparate[getoperationSeparate.length - 1][1] == undefined
    ) {
      btn_zero = true;
    } else {
      btn_zero = false;
      document.getElementById("answer").innerText = getoldValue + getValue;
    }

    document.getElementById("zero").disabled = btn_zero;
  } catch (error) {
    document.getElementById("answer").innerText = getoldValue + getValue;
  }
}

function getOperation(id) {
  let getValue = document.getElementById(id).value; //get the value of specific id
  let getoldValue = document.getElementById("answer").innerText; //get the value
  document.getElementById("answer").innerText = getoldValue + getValue;
  document.getElementById("sub").disabled = true;
  document.getElementById("add").disabled = true;
  document.getElementById("div").disabled = true;
  document.getElementById("mul").disabled = true;
  document.getElementById("per").disabled = true;
  document.getElementById("dot").disabled = false;
}

//function delded
function del() {
  let getValue = document.getElementById("answer").innerText; //get the value
  if (getValue.length == 1) {
    document.getElementById("answer").innerText = 0;
  } else {
    let valueArray = getValue.split("");
    let newValue = "";
    for (let i = 0; i < valueArray.length - 1; i++) {
      newValue += valueArray[i];
    }
    document.getElementById("answer").innerText = newValue;
    let signArray = newValue.split(/[+\-*/]/);

    if (signArray[signArray.length - 1].includes(".")) {
      document.getElementById("dot").disabled = true;
    } else {
      document.getElementById("dot").disabled = false;
    }
  }
}

//function clr to clear the display and change the value to 0
function clr() {
  document.getElementById("answer").innerText = 0; //change the value to zero
  document.getElementById("history").innerText = 0;
  document.getElementById("dot").disabled = false;
}

//function equal
function calculator() {
  try {
    let getValue = document.getElementById("answer").innerText; // Get the value
    let getValuearray = getValue.split("");

    if ("-+*/.".includes(getValuearray[getValuearray.length - 1])) {
      //will remove the extra at the right
      getValuearray.pop();
    }

    for (let i = 0; i < getValuearray.length; i++) {
      if (getValuearray[i] === "%") {
        if (/^\d+(\.\d+)?$/.test(getValuearray[i + 1])) {
          //check if the next element is a number and dor "."
          getValuearray[i] = getValuearray[i].replace("%", "% *");
        }
      }
    }

    let newValue = getValuearray.join("");
    if (newValue.includes("%")) {
      newValue = newValue.replace("%", "/100");
    }
    let displayAnwer = eval(newValue).toFixed(4);
    let Arraydisplay = displayAnwer.split("."); //split the value by dot

    let first = Arraydisplay[0];
    let sec = Arraydisplay.length > 1 ? Arraydisplay[1] : "";

    if (sec == "0000") {
      document.getElementById("answer").innerText = eval(newValue);
      document.getElementById("history").innerText = newValue + " ="; //display history
      document.getElementById("dot").disabled = false;
    } else {
      document.getElementById("answer").innerText = eval(newValue).toFixed(4);
      document.getElementById("history").innerText = newValue + " ="; //display history
      document.getElementById("dot").disabled = true;
    }

    document.getElementById("sub").disabled = false;
    document.getElementById("add").disabled = false;
    document.getElementById("div").disabled = false;
    document.getElementById("mul").disabled = false;
    document.getElementById("per").disabled = false;
  } catch (error) {
    document.getElementById("answer").innerText = "0";
  }
}
function dot() {
  let getValue = document.getElementById("dot").value; //get the value of specific id
  let getoldValue = document.getElementById("answer").innerText; //get the value
  document.getElementById("answer").innerText = getoldValue + getValue; //change the value to zero
  document.getElementById("dot").disabled = true;
  document.getElementById("zero").disabled = false;
}

function percent() {
  let getValue = document.getElementById("per").value; //get the value of specific id
  let getoldValue = document.getElementById("answer").innerText; //get the value
  document.getElementById("answer").innerText = getoldValue + getValue; //change the value to zero
  document.getElementById("dot").disabled = false;
  document.getElementById("zero").disabled = false;
}
