function addZero(value) {
    return value < 10 ? "0" + value : value;
}

function myDigitalClock() {
    var date = new Date();
    var hours = date.getHours(); // 0 to 23
    var minutes = date.getMinutes(); // 0 to 59
    var seconds = date.getSeconds(); // 0 to 59
    var zone = "AM";
    if (hours >= 12) {
        zone = "PM";
    }
    hours = hours % 12;
    hours = hours ? hours : 12; 

    minutes =addZero(minutes)
    seconds = addZero(seconds)

    var clock= hours + ":" + minutes + ":" + seconds + " " + zone;
    console.log(clock)    
    setTimeout(myDigitalClock, 1000);
}



myDigitalClock();