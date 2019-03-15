// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2019, The Lithe Project
// Copyright (c) 2019, The Elphyrecoin Developers
// Copyright (c) 2019, The Testing Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "\n-----Testing-----\n";

const std::string nonWindowsAsciiArt =
      "\n                                                                                       \n"
"TTTTTTTTTTTTTTTTTTTTTTT                                          tttt            iiii             \n"                          
"T:::::::::::::::::::::T                                       ttt:::t           i::::i              \n"                        
"T:::::::::::::::::::::T                                       t:::::t            iiii                \n"                       
"T:::::TT:::::::TT:::::T                                       t:::::t                                 \n"                      
"TTTTTT  T:::::T  TTTTTTeeeeeeeeeeee        ssssssssss   ttttttt:::::ttttttt    iiiiiiinnnn  nnnnnnnn       ggggggggg   ggggg\n"
"        T:::::T      ee::::::::::::ee    ss::::::::::s  t:::::::::::::::::t    i:::::in:::nn::::::::nn    g:::::::::ggg::::g\n"
"        T:::::T     e::::::eeeee:::::eess:::::::::::::s t:::::::::::::::::t     i::::in::::::::::::::nn  g:::::::::::::::::g\n"
"        T:::::T    e::::::e     e:::::es::::::ssss:::::stttttt:::::::tttttt     i::::inn:::::::::::::::ng::::::ggggg::::::gg\n"
"        T:::::T    e:::::::eeeee::::::e s:::::s  ssssss       t:::::t           i::::i  n:::::nnnn:::::ng:::::g     g:::::g \n"
"        T:::::T    e:::::::::::::::::e    s::::::s            t:::::t           i::::i  n::::n    n::::ng:::::g     g:::::g \n"
"        T:::::T    e::::::eeeeeeeeeee        s::::::s         t:::::t           i::::i  n::::n    n::::ng:::::g     g:::::g \n"
"        T:::::T    e:::::::e           ssssss   s:::::s       t:::::t    tttttt i::::i  n::::n    n::::ng::::::g    g:::::g \n"
"      TT:::::::TT  e::::::::e          s:::::ssss::::::s      t::::::tttt:::::ti::::::i n::::n    n::::ng:::::::ggggg:::::g \n"
"      T:::::::::T   e::::::::eeeeeeee  s::::::::::::::s       tt::::::::::::::ti::::::i n::::n    n::::n g::::::::::::::::g \n"
"      T:::::::::T    ee:::::::::::::e   s:::::::::::ss          tt:::::::::::tti::::::i n::::n    n::::n  gg::::::::::::::g \n"
"      TTTTTTTTTTT      eeeeeeeeeeeeee    sssssssssss              ttttttttttt  iiiiiiii nnnnnn    nnnnnn    gggggggg::::::g \n"
"                                                                                                                    g:::::g \n"
"                                                                                                        gggggg      g:::::g \n"
"                                                                                                        g:::::gg   gg:::::g \n"
"                                                                                                         g::::::ggg:::::::g \n"
"                                                                                                          gg:::::::::::::g  \n"
"                                                                                                            ggg::::::ggg    \n"
"                                                                                                               gggggg";

/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
