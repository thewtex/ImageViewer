// generated by Fast Light User Interface Designer (fluid) version 1.0011

#include "CellsViewerGUI.h"

#include <FL/Fl_Pixmap.H>
static const char *image_itkLogoSmallTransparentBackground[] = {
"100 64 256 2",
"   c gray100",
".  c #313131",
"X  c #393939",
"o  c gray26",
"O  c gray29",
"+  c gray32",
"@  c #5a5a5a",
"#  c gray39",
"$  c gray42",
"%  c gray45",
"&  c #7b7b7b",
"*  c #848484",
"=  c gray55",
"-  c gray58",
";  c gray61",
":  c #a5a5a5",
">  c gray68",
",  c gray71",
"<  c gray74",
"1  c #c6c6c6",
"2  c #cecece",
"3  c gray84",
"4  c gray87",
"5  c #e7e7e7",
"6  c #efefef",
"7  c #efe7e7",
"8  c #d6cece",
"9  c #e7dede",
"0  c #ada5a5",
"q  c #e7ded6",
"w  c #a59c94",
"e  c #948c84",
"r  c #efe7de",
"t  c #6b635a",
"y  c #5a5242",
"u  c #423108",
"i  c #8c7b4a",
"p  c #847342",
"a  c #7b735a",
"s  c #736331",
"d  c #312910",
"f  c #c6a529",
"g  c #5a4a10",
"h  c #846b10",
"j  c #8c8463",
"k  c #736b4a",
"l  c #9c8c4a",
"z  c #8c7b31",
"x  c #847329",
"c  c #736321",
"v  c #a58c29",
"b  c #efce39",
"n  c #ad9429",
"m  c #debd31",
"M  c #cead29",
"N  c #d6b529",
"B  c #ffd631",
"V  c #debd29",
"C  c #7b734a",
"Z  c #736b42",
"A  c #847321",
"S  c #c6ad31",
"D  c #8c7b21",
"F  c #f7d639",
"G  c #b59c29",
"H  c #ffde39",
"J  c #bda529",
"K  c #736318",
"L  c #f7d631",
"P  c #7b6b18",
"I  c #847318",
"U  c #b59c21",
"Y  c #e7c629",
"T  c #efce29",
"R  c #f7d629",
"E  c #a58c18",
"W  c #ad9418",
"Q  c #947b08",
"!  c #8c8452",
"~  c #847b42",
"^  c #6b6331",
"/  c #635a21",
"(  c #948429",
")  c #9c8c29",
"_  c #948421",
"`  c #bda521",
"\'  c #847308",
"]  c #7b7339",
"[  c #736b31",
"{  c #ffe742",
"}  c #ffe739",
"|  c #524a10",
" . c #948418",
".. c #ffef42",
"X. c #efefe7",
"o. c #f7f7ef",
"O. c #fffff7",
"+. c #cecec6",
"@. c #deded6",
"#. c #e7e7de",
"$. c #b5b5ad",
"%. c #c6c6bd",
"&. c #94948c",
"*. c #8c8c84",
"=. c #5a5a52",
"-. c #52524a",
";. c #8c8c7b",
":. c #9c9c84",
">. c #84846b",
",. c #292921",
"<. c #525239",
"1. c #525231",
"2. c #212110",
"3. c #292910",
"4. c #101000",
"5. c #f7ffff",
"6. c #dee7e7",
"7. c #bdc6c6",
"8. c #848c8c",
"9. c #424a4a",
"0. c #102131",
"q. c #eff7ff",
"w. c #081829",
"e. c #d6dee7",
"r. c #737b84",
"t. c #101821",
"y. c #cedef7",
"u. c #39527b",
"i. c #a5bde7",
"p. c #42639c",
"a. c #213963",
"s. c #4284ff",
"d. c #183973",
"f. c #e7efff",
"g. c #c6d6f7",
"h. c #94adde",
"j. c #5a6b8c",
"k. c #4a5a7b",
"l. c #425273",
"z. c #4a6394",
"x. c #425a8c",
"c. c #29395a",
"v. c #527bce",
"b. c #395a9c",
"n. c #294273",
"m. c #2952a5",
"M. c #102142",
"N. c #183163",
"B. c #397bff",
"V. c #295abd",
"C. c #214a9c",
"Z. c #18397b",
"A. c #3173ff",
"S. c #10295a",
"D. c #296bef",
"F. c #184294",
"G. c #081839",
"H. c #001031",
"J. c #737b8c",
"K. c #9cb5ef",
"L. c #8ca5de",
"P. c #6b8cd6",
"I. c #6384ce",
"U. c #39528c",
"Y. c #426bc6",
"T. c #3963bd",
"R. c #294a94",
"E. c #081021",
"W. c #3973ef",
"Q. c #21428c",
"!. c #3163ce",
"~. c #3973f7",
"^. c #316be7",
"/. c #295ac6",
"(. c #214aa5",
"). c #183984",
"_. c #2963e7",
"`. c #2152bd",
"\'. c #2152c6",
"]. c #215ad6",
"[. c #1842a5",
"{. c #10317b",
"}. c #184ab5",
"|. c #184abd",
" X c #103994",
".X c #1042ad",
"XX c #08215a",
"oX c #082973",
"OX c #bdcef7",
"+X c #6b7ba5",
"@X c #94adef",
"#X c #5a6b94",
"$X c #8ca5e7",
"%X c #7b94d6",
"&X c #7394e7",
"*X c #394a73",
"=X c #31426b",
"-X c #5a7bce",
";X c #5273c6",
":X c #21315a",
">X c #4263b5",
",X c #3152a5",
"<X c #294a9c",
"1X c #315abd",
"2X c #214294",
"3X c #2952b5",
"4X c #2952bd",
"5X c #316bf7",
"6X c #214ab5",
"7X c #18398c",
"8X c #081842",
"9X c #08297b",
"0X c #dee7ff",
"qX c #b5c6f7",
"wX c #8ca5ef",
"eX c #738cd6",
"rX c #7394ef",
"tX c #6b8ce7",
"yX c #6384e7",
"uX c #5273ce",
"iX c #4a6bc6",
"pX c #395abd",
"aX c #3152ad",
"sX c #18399c",
"dX c #10318c",
"fX c #d6def7",
"gX c #737b94",
"hX c #5a7be7",
"jX c #adbdf7",
"kX c #a5b5ef",
"lX c #849cef",
"zX c #849cf7",
"xX c #7b94ef",
"cX c #738ce7",
"vX c #21316b",
"bX c #ced6f7",
"nX c #636b8c",
"mX c #738cef",
"MX c #6b84e7",
"NX c #c6cef7",
"BX c #525a84",
"VX c #bdc6f7",
"CX c #e7e7ef",
"ZX c #efeff7",
"AX c #f7f7ff",
"SX c #c6c6ce",
"DX c #ceced6",
"FX c #d6d6de",
"GX c #adadb5",
"HX c #bdbdc6",
"JX c #efefff",
"KX c #bdbdce",
"LX c #e7e7ff",
"PX c #dedeff",
"IX c black",
"UX c silver",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX1 <\
 > - * * $ O + + + + O + O + + + + O + & % - ; < < UXUXUXUXUXUXUXUXUXUXUXUXUXU\
XUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX< > = & @ @\
 $ * : , 3 6 6 o.              o.o.ZX5 1 , ; & t + # & ; , < UXUXUXUXUXUXUXUXU\
XUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX< - $ + $ - < 5  \
                                                 5.4 , * @ @ & : < UXUXUXUXUXU\
XUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX, = @ @ = 2 o.         \
                                                           6 , % + % : < UXUXU\
XUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX< ; # + - 4                  \
                                                                   < & O & > U\
XUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX< - O % 2                        \
                                                                       o.GX@ $\
 : < UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX< ; + = 5                            \
                                                                             2\
 $ + ; 1 UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX1 - o = 6                                \
                                                                              \
   3 $ @ > UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX, + & o.    6 6 5 6                        \
                                                                              \
       2 O & < UXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUX< = + 3 o., = = = = - - = - < 6                \
                           AX0XfXbXNXqXqXkXK.@XlXkX                           \
           ; o > UXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUX, + = 6 ; * GX4 o.  O.r @.@.9 > & - o.           \
                           OXyXtXtXtXMXtXMXcXtXtXwX                           \
             5 + & < UXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUX: o 2 3 % <         > k.R.R.U.r.#.  , % 3          \
                           AXbXK.cXcXcXcX&XmXcXcX@X                           \
                 = @ < UXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUX; O 6 2 % 6         & sX5XB.B.B.].n.%.  5 % 3        \
                                 OXcXmX&XcXcX&XtX@X                           \
                   , o < UXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUX= @ o.o.% 6         ; [.B.B.s.s.B.s.5X*X7   4 %        \
                                   wXtXcXrXcXcXcX@X                           \
                     2 O , UXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUX= #     > >         o.u.A.B.s./.<XW.B.B.`.-     ; <      \
                                   kXtX&XcXcXrXMX@X                           \
                       3 o < UXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUX> +       = 4         +.m.B.s.m.IXIX0.W.s.D.nX    3 ;      \
       5.JX                        jXtXmXcX&XcXtX@X                           \
                         3 o < UXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUX, o o.      = 5         < aXB.s.S.IXIXIX/.s.D.j.O.  3 -      \
       K.cXq.                      jXMX&XcXmXcXcX@X                           \
                           1 + 1 UXUXUXUXUXUX",
"UXUXUXUXUXUXUX1 O 4         ; <         8 <XB.s.2XIXIXE.^.s.D.nX    > >      \
     qXMX&XAX                      jXtXcX&XcX&XtX@X                           \
                             ; % UXUXUXUXUXUX",
"UXUXUXUXUXUXUX# >           6.&         O.l.5XB.B.<Xd.!.s.B.(.;   o.& 6      \
   NXtXmX&XJX                      jXtXcXmXcXcXMX@X                           \
                               # : UXUXUXUXUX",
"UXUXUXUXUXUX> $               : -         0 2XB.s.B.s.s.B._.l.o.  * ,        \
 PX&XcXcX&Xq.                      jXMX&XcX&XmXtX@X                           \
                               6 O < UXUXUXUX",
"UXUXUXUXUX1 O 5                 ; * 6       - Q._.A.B.5X\'.k.#.6 & >         \
0X&XtXcXcXxXAX                      jXtXcXcXcX&XcX@X                          \
                                  ; = UXUXUXUX",
"UXUXUXUXUX; *                     1 % ; 4     8 J.z.p.j.= %.; & 2         0X&\
XcXcXrXcX&XJX                      jXtXcXrXcXcXtX@X                           \
                                   + 1 UXUXUX",
"UXUXUXUX1 + 5                         < = * = > $.w e *.- - 1           0X&Xc\
XmX&XcXcX&Xq.                      jXMX&XcXcX&XMX@X                           \
                                   : & UXUXUX",
"UXUXUXUX> %                               o.5 8 +.8 @.X.O.            fX&XcX&\
XcXcXcXcXxXAX                      jXtXmXcX&XmXtX@X                           \
                                   o.o 1 UXUX",
"UXUXUXUX& 1                             5.AXZXfXg.qXi.h.eXL.        VXtXcXmXc\
XmX&XmXcX&XAX                      jXMX&XcXcXcXcX@X                           \
                                     & = 1 UX",
"UXUXUX< @ o.                      q.P.-XiXT.1X1X3X6X6X}.}.iX5.  JXK.MXcXcX&Xc\
X&XcX&XcX&XK.kXkXkXkXkXkXK.PX      jXtXcX&XmX&XtX@X            f.K.K.kXkXkXkXk\
XkXkXkXkXK.K.PX                      < O 2 UX",
"UXUXUX, $                         o.I.1X`././.V.V.V.4X1X6X;X    @XyXtXtXcXcXr\
XcXcXcXmXcXMXyXyXyXyXyXyXhXOX      jXtXcXcXcXcXMX@X            JXkXxXMXtXtXtXt\
XtXMXyXtXlXK.0X                      6 o 1 UX",
"UXUXUX- -                       e.;.l ~ O a.).[.6X/././.4X;X    fXNXbXbXjXcXc\
X&XmX&XcX&XOXbXbXbXbXbXbXg.ZX      jXMX&XmX&XcXtX@X                AXwXcXcXmXc\
XtXlXOXf.                              + : 1 ",
"UXUXUX& GX                    e x M J P f Y G x <.c.Z.C..XiX5.          bXtXc\
XcX&XcXcXxXAX                      jXtXcXcXcXrXcX@X                  qXMXrXtX&\
XqXAX                                  $ * 1 ",
"UXUXUX& %.                  e.P B H M J { { { } H Y J ( ^ -.- 6.        bXtXm\
X&XcXmXcX&Xq.                      jXtXcX&XcXcXtX@X                  @XtXMX@XC\
X                                      * % 2 ",
"UXUXUX# 2                   5 a ! k y / F L { { { { H { } L ` s 7.      g.cXc\
XcXcX&XcX&XJX                      jXMX&XcXmX&XMX@X              AXkXMXcXqXAX \
                                       = $ 2 ",
"UXUXUX# 2                     AX# / c A ] i D f H { { F H { { T C AX    bXtXc\
XcXrXcXcXxXAX                      jXtXcXmX&XcXtX@X            0XwXyXlXfX     \
                                       * % 1 ",
"UXUXUX* <                       0 j :., 5   +XH.g J H { { F { { z 6.    g.tXm\
X&XcX&XcX&XAX                      jXMX&XcXcXcXcX@X          OXcXMXkXAX       \
                                       & & 1 ",
"UXUXUXr.0                                   $X`.dXG.d  .m F { H z e.    bXtXc\
XcX&XmXcX&XJX                      jXtXcX&XmX&XtX@X      q.K.MX&XbX           \
                                       # = 1 ",
"UXUXUX: =                               ZX&.x./././.7X8Xt.d S H ] ZX    bXcXc\
XrXcXcXmX&Xq.                      jXtXcXcXcXcXMX@X    fXxXMXcXqX             \
                                       + : < ",
"UXUXUX, $                             AXa Q vX/.1X1X/./.4X9Xv N *.      bXtXc\
XcXcX&XcX&XAX                      jXMX&XmX&XcXcX@XAXjXtXcX&XcXcXbX           \
                                     5 o , 1 ",
"UXUXUX1 @ 6                           ; U Y vX/.1X4X1X1X/.2XK p CX      g.tXm\
X&XcXcXcXxXAX                      jXtXcXcXcXrXcXlXwXtXcXcXmX&XcXcXbX         \
                                     : @ 1 1 ",
"UXUXUXUX* >                           j T F c vX}./.1X1X4X>XGX6.        bXtXc\
XcXrXcXcX&XJX                      jXtXcX&XcXcX&XcXMXcX&XcX&XcXmXtXrXfX       \
                                     $ * < 1 ",
"UXUXUXUX, #                           >.m { { f 1.vXsX`.\'.uX            bXcX\
cX&XcX&XmX&Xq.                      jXMX&XcXrXcXcXlXlXcXcXrXcXcX&XcXtXcXPX    \
                                    5 o , < 2 ",
"UXUXUXUXUX# 3                         HXA H { { H N x <.a.b.ZX          bXtXc\
XmX&XcXcX&XAX                      jXtXcXrXcXcXtXK.ZXlXtXcXcXrXcX&XcXcX&X0X   \
                                   * # 1 < 1 ",
"UXUXUXUXUX: $                           ; D F { { { } F N ( k DX        g.tXc\
X&XcXmXcXxXAX                      jXMXcXcX&XcXcX@X  f.&XcX&XcXcXmX&XcXtX&X0X \
                                 6 X > < 1 UX",
"UXUXUXUXUX1 # 1                           HX^ W b { { { { { Y [ JX      bXtXm\
XcX&XcXcX&XAX                      jXtXcX&XmXcXtX@X    f.xXcXcX&XcXmX&XcXcXxXf\
.                                & # 1 , 2 UX",
"UXUXUXUXUXUX< O                           , n.8X2.| I U V b { ) 1       g.cX&\
XcXmX&XcX&XJX                      jXMX&XcXcX&XMX@X      0XxXtXcXcX&XcXcXcXcX&\
Xf.                            2 . , < 1 1 UX",
"UXUXUXUXUXUXUX- *                       e h a.!..X{.XXM.G.,.E ] CX      bXtXc\
XcX&XcXmX&XLX                      jXtXcXmX&XcXcX@X        0X&XcXrXcX&XmX&XcXc\
XlXJX                        o.o * 1 , 2 UXUX",
"UXUXUXUXUXUXUX1 @ ,                   FXD R a.!.1X/.!././.Q.=.FX        fXcXm\
X&XcXcXcXcXbX                      jXMX&XcXcXmXtX@X          fX&XcXcXcX&XcXmXc\
XtXlXq.                      % @ 1 < 1 1 UXUX",
"UXUXUXUXUXUXUXUX< o 3                 DX) B c./.1X1X1X1X4XY.AX          f.cXc\
XmX&XmX&XMXkX              AX      kXtXcX&XcX&XcXwX            fXcXmX&XcXcX&Xc\
XcXtXwXAX                  - X < < , 1 UXUXUX",
"UXUXUXUXUXUXUXUXUX< o 4               AXC T [  X/.4X4X4X3X3XbX            @Xt\
X&XcX&XcXcXcXy.          qXlXAX  AXlXcXcXcXmXcXcXcXf.            y.cXcXcXrXcXc\
X&XcXMXwXAX              : . > 1 , 2 UXUXUXUX",
"UXUXUXUXUXUXUXUXUXUX> o 4               KXg ` c :X3X1X1X1X3X-Xq.          bXt\
XcXmXcXcXrXcX&XjXfX0XfX@XyXjX  5.kXtXcXcXrXcX&XmXcXK.AX            bXmXcXcXcX&\
XmX&XcXtXwXq.          > . > 1 , 1 1 UXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUX> o 2         fXh.-XoX0.d 4.H.aX4X3X4X6XiXh.fX        j\
XtXcX&XcXcXcXcXtXcXcXMXMXVXZXqXlXMXcXcXcXcXcXcXcXcXMXxXjXf.          g.cXcXmXc\
XcXcXcXcXtX&XqXbX5.  ; ,.> 1 , HX1 UXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUX, o ,       %X6X1X!.pX1XaX,XpXT.T.T.T.1X6XeX         \
 OX&XMXtXcXmXcXcXtXMXlXy.  OXMX&X&XxX&XxX&XxX&XxX&X&X&XtXqX            g.&X&Xx\
X&XxX&XxX&X&XcXzX0X& X , 1 , 1 1 UXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUX< O *     5.AX5.AXAXAX5.5.AXAXAXAXAXAXAX5.         \
   JXOXK.lXlX&XwXK.g.AX      AX  5.          AX        AX                     \
 AX            4 O -.< < , 1 +.UXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUX1 # O 3                                          \
           AX                                                                 \
             > . % 1 HX, 1 1 UXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUX1 ; ,.= o.                                     \
                                                                              \
         4 @ X : 1 < < +.1 UXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX1 HX+ o ,                                    \
                                                                              \
     o.8.. % 1 < < < 1 HXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXSX: X + <                                \
                                                                              \
 o.- X @ > 1 < < < 1 UXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX%.2 = X + >                            \
                                                                           CX=\
 X + : +.< < < 1 1 UXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX1 1 = O o * 4                      \
                                                                       1 $ X @\
 : SX< , < 1 1 UXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX1 1 ; # X @ ; 5                \
                                                                 2 * o o & , 1\
 < < < 1 1 UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX1 2 < = @ X + = 1 o.       \
                                                         5 , & O o $ : < 1 < <\
 < 1 1 1 UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX1 2 1 < - # O o @ * > 3\
 o.                                            6 2 ; & + o + % : < 1 < < < < 1\
 1 UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX1 1 1 2 HX> - $ @ O\
 o + $ * - : , 1 3 3 4 5 5 3 4 2 < , ; = & # O o O # % ; , 1 1 < < < < 1 1 1 U\
XUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX%.1 1 1 1 1 <\
 GX: = % # # + + O O o o O O O + + @ # $ & - > , < 1 1 < < < < 1 1 1 1 UXUXUXU\
XUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX< 1 1 1\
 1 < 1 1 1 1 1 1 < < < , < < < < 1 1 1 1 1 < < < < < 1 1 1 1 1 1 UXUXUXUXUXUXU\
XUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX",
"UXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXU\
XUX1 < 1 1 1 1 1 1 1 1 < < < < < < < 1 1 < 1 1 1 1 1 < < UXUXUXUXUXUXUXUXUXUXU\
XUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUXUX"
};
static Fl_Pixmap pixmap_itkLogoSmallTransparentBackground(image_itkLogoSmallTransparentBackground);

inline void CellsViewerGUI::cb_Load_i(Fl_Menu_*, void*) {
  LoadSubstrate();
}
void CellsViewerGUI::cb_Load(Fl_Menu_* o, void* v) {
  ((CellsViewerGUI*)(o->parent()->user_data()))->cb_Load_i(o,v);
}

inline void CellsViewerGUI::cb_Quit_i(Fl_Menu_*, void*) {
  Quit();
}
void CellsViewerGUI::cb_Quit(Fl_Menu_* o, void* v) {
  ((CellsViewerGUI*)(o->parent()->user_data()))->cb_Quit_i(o,v);
}

inline void CellsViewerGUI::cb_Cellular_i(Fl_Menu_*, void*) {
  ShowCellularAggregateControls();
}
void CellsViewerGUI::cb_Cellular(Fl_Menu_* o, void* v) {
  ((CellsViewerGUI*)(o->parent()->user_data()))->cb_Cellular_i(o,v);
}

inline void CellsViewerGUI::cb_Substrates_i(Fl_Menu_*, void*) {
  substratesWindow->show();
}
void CellsViewerGUI::cb_Substrates(Fl_Menu_* o, void* v) {
  ((CellsViewerGUI*)(o->parent()->user_data()))->cb_Substrates_i(o,v);
}

Fl_Menu_Item CellsViewerGUI::menu_[] = {
 {"File", 0,  0, 0, 64, 0, 0, 14, 0},
 {"Load Substrate", 0,  (Fl_Callback*)CellsViewerGUI::cb_Load, 0, 0, 0, 0, 14, 0},
 {"Quit", 0x80071,  (Fl_Callback*)CellsViewerGUI::cb_Quit, 0, 0, 0, 0, 14, 0},
 {0},
 {"View", 0,  0, 0, 64, 0, 0, 14, 0},
 {"Cellular Aggregate Controls", 0,  (Fl_Callback*)CellsViewerGUI::cb_Cellular, 0, 0, 0, 0, 14, 0},
 {"Substrates Controls", 0,  (Fl_Callback*)CellsViewerGUI::cb_Substrates, 0, 0, 0, 0, 14, 0},
 {0},
 {0}
};

inline void CellsViewerGUI::cb_3_i(Fl_Button*, void*) {
  Run();
}
void CellsViewerGUI::cb_3(Fl_Button* o, void* v) {
  ((CellsViewerGUI*)(o->parent()->user_data()))->cb_3_i(o,v);
}

inline void CellsViewerGUI::cb_4square_i(Fl_Button*, void*) {
  Stop();
}
void CellsViewerGUI::cb_4square(Fl_Button* o, void* v) {
  ((CellsViewerGUI*)(o->parent()->user_data()))->cb_4square_i(o,v);
}

inline void CellsViewerGUI::cb__i(Fl_Button*, void*) {
  Restart();
}
void CellsViewerGUI::cb_(Fl_Button* o, void* v) {
  ((CellsViewerGUI*)(o->parent()->user_data()))->cb__i(o,v);
}

inline void CellsViewerGUI::cb_substratesBrowser_i(Fl_Browser* o, void*) {
  ShowSubstrate( o->text( o->value() ) );
}
void CellsViewerGUI::cb_substratesBrowser(Fl_Browser* o, void* v) {
  ((CellsViewerGUI*)(o->parent()->user_data()))->cb_substratesBrowser_i(o,v);
}

CellsViewerGUI::CellsViewerGUI() {
  Fl_Window* w;
  { Fl_Window* o = controlWindow = new Fl_Window(252, 162, "Control Panel");
    w = o;
    o->user_data((void*)(this));
    { Fl_Button* o = new Fl_Button(10, 75, 110, 75);
      o->box(FL_FLAT_BOX);
      pixmap_itkLogoSmallTransparentBackground.label(o);
    }
    { Fl_Menu_Bar* o = new Fl_Menu_Bar(0, 0, 250, 25);
      o->menu(menu_);
    }
    { Fl_Button* o = new Fl_Button(20, 35, 60, 20, "@-3>");
      o->labeltype(FL_SYMBOL_LABEL);
      o->callback((Fl_Callback*)cb_3);
    }
    { Fl_Button* o = new Fl_Button(80, 35, 60, 20, "@#-4square");
      o->labeltype(FL_SYMBOL_LABEL);
      o->callback((Fl_Callback*)cb_4square);
    }
    iterationValueOutput = new Fl_Value_Output(180, 66, 60, 25, "Iteration : ");
    numberOfCellsValueOutput = new Fl_Value_Output(180, 93, 60, 25, "Cells : ");
    { Fl_Button* o = new Fl_Button(140, 35, 60, 20, "@#|<");
      o->labeltype(FL_SYMBOL_LABEL);
      o->callback((Fl_Callback*)cb_);
    }
    timeValueOutput = new Fl_Value_Output(180, 120, 60, 25, "Time : ");
    o->end();
  }
  { Fl_Window* o = substratesWindow = new Fl_Window(249, 146, "Substrates");
    w = o;
    o->user_data((void*)(this));
    { Fl_Browser* o = substratesBrowser = new Fl_Browser(15, 15, 220, 115);
      o->type(1);
      o->callback((Fl_Callback*)cb_substratesBrowser);
    }
    o->end();
  }
}

CellsViewerGUI::~CellsViewerGUI() {
}
