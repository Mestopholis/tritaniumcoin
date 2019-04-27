// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string nonWindowsAsciiArt = 
      "\n"
"/$$$$$$$$           /$$   /$$                         /$$                        \n";
"|__  $$__/          |__/  | $$                        |__/                       \n";
"   | $$     /$$$$$$  /$$ /$$$$$$    /$$$$$$  /$$$$$$$  /$$ /$$   /$$ /$$$$$$/$$$$\n";
"   | $$    /$$__  $$| $$|_  $$_/   |____  $$| $$__  $$| $$| $$  | $$| $$_  $$_  $$\n";
"   | $$   | $$   __/| $$  | $$      /$$$$$$$| $$    $$| $$| $$  | $$| $$   $$   $$\n";
"   | $$   | $$      | $$  | $$ /$$ /$$__  $$| $$  | $$| $$| $$  | $$| $$ | $$ | $$\n";
"   | $$   | $$      | $$  |  $$$$/|  $$$$$$$| $$  | $$| $$|  $$$$$$/| $$ | $$ | $$\n";
"   |__/   |__/      |__/   ___/   _______/|__/  |__/|__/ ______/ |__/ |__/ |__/\n";
                                                                                  
                                                                                 

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */

const std::string asciiArt = nonWindowsAsciiArt;

