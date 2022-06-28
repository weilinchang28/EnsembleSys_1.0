autowatch = 1;
outlets = 3;

var chordProg = 0; 

var sG3 = 207.65;
var A3 = 220;
var sA3 = 233.08;
var B3 = 246.94;
var C4 = 261.63;
var sC4 = 277.18;
var D4 = 293.66;
var sD4 = 311.13;
var E4 = 329.63;
var F4 = 349.23;
var sF4 = 369.99;
var G4 = 392;
var sG4 = 415.3;
var A4 = 440;
var sA4 = 466.16; 
var B4 = 493.88;
var C5 = 523.25;
var sC5 = 554.37;
var D5 = 587.33; 
var sD5 = 622.25;


var userA = [F4,F4,G4,G4,G4,A4,A4,A4,A4,sA4,sA4,C5,C5];
var userB = [D4,D4,D4,D4,E4,E4,E4,F4,F4,G4,G4,A4];
var userC = [A3,sA3,sA3,C4,C4,C4,D4,D4,D4,E4,E4,F4];
var userChord = [userA, userB, userC];
var counter = 0;
var chordIndex = 0;

var alpha_freq = 5;

// Game System

function playChord(freqA, freqB, freqC) // freq from MAXMSP, user number (e.g. 330.2,2)
{
    var result = [false,false,false]
    //print freq and player
    if(Math.abs(freqA-userA[chordIndex])<alpha_freq)
    {
        ressult[0]=true;
    }

    if(Math.abs(freqB-userB[chordIndex])<alpha_freq)
    {
        ressult[1]=true;
    }

    if(Math.abs(freqC-userC[chordIndex])<alpha_freq)
    {
        ressult[2]=true;
    }

    for(var i = 0; i < 3; i++)
    {
        // 
    }

    if ()
    {
        counter++;
    }
    else // if not all of them are on the target
    {
        outlet(0,false);
    }

    outlet(1, "counting" + counter);
    outlet(2, "current chord" + chordIndex);
    
}

playChord();
