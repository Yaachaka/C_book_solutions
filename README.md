# C_book_solutions
C PROGRAMMING A Modern Approach second edition (2008) by K. N. King exercise problems' solutions.

Author's website for the book: [http://www.knking.com/books/c2/](http://www.knking.com/books/c2/ "http://www.knking.com/books/c2/")

**File/Folder names used**: knkcch02e01, knkcch02proj01\
**knk**: K. N. King, the author's name\
**c**: C, the programming language\
**ch02**: Chapter 2\
**e01**: Exercise 1\
**proj01**: Programming Project1

## Basic Features of C

|01|INTRODUCING C|1(26)|
|---|---|---|
|**01.1**|**History of C**|**1(26)**|
||Origins|1(26)|
||Standardization|2(27)|
||C-Based Languages|3(28)|
|**01.2**|**Strengths and Weaknesses of C**|**4(29)**|
||Strengths|4(29)|
||Weaknesses|5(30)|
||Effective Use of C|6(31)|

|02|C FUNDAMENTALS|9(34)|
|---|---|---|
|**02.1**|**Writing a Simple Program**|**9(34)**|
||Program: Printing a Pun|9(34)|
||Compiling and Linking|10(35)|
||Integrated Development Environments|11(36)|
|**02.2**|**The General Form of a Simple Program**|**12(37)**|
||Directives|12(37)|
||Functions|13(38)|
||Statements|14(39)|
||Printing Strings|14(39)|
|**02.3**|**Comments**|**15(40)**|
|**02.4**|**Variables and Assignment**|**17(42)**|
||Types|17(42)|
||Declarations|17(42)|
||Assignment|18(43)|
||Printing the Value of a Variable|19(44)|
||Program: Computing the Dimensional Weight of a Box|20(45)|
||Initialization|21(46)|
||Printing Expressions|22(47)|
|**02.5**|**Reading Input**|**22(47)**|
||Program: Computing the Dimensional Weight of a Box (Revisited)|22(47)|
|**02.6**|**Defining Names for Constants**|**23(48)**|
||Program: Converting from Fahrenheit to Celsius|24(49)|
|**02.7**|**Identifiers**|**25(50)**|
||Keywords|26(51)|
|**02.8**|**Layout of a C Program**|**27(52)**|

|03|FORMATTED INPUT/OUTPUT|37(62)|
|---|---|---|
|**03.1**|**The _printf_ Function**|**37(62)**|
||Conversion Specifications|38(63)|
||Program: Using _printf_ to Format Numbers|40(65)|
||Escape Sequences|41(66)|
|**03.2**|**The _scanf_ Function**|**42(67)**|
||How _scanf_ Works|43(68)|
||Ordinary Characters in Format Strings|45(70)|
||Confusing _printf_ with _scanf_|45(70)|
||Program: Adding Fractions|46(71)|

|04|EXPRESSIONS|53(78)|
|---|---|---|
|**04.1**|**Arithmetic Operators**|**54(79)**|
||Operator Precedence and Associativity|55(80)|
||Program: Computing a UPC Check Digit|56(81)|
|**04.2**|**Assignment Operators**|**58(83)**|
||Simple Assignment|58(83)|
||Lvalues|59(84)|
||Compound Assignment|60(85)|
|**04.3**|**Increment and Decrement Operators**|**61(86)**|
|**04.4**|**Expression Evaluation**|**62(87)**|
||Order of Subexpression Evaluation|64(89)|
|**04.5**|**Expression Statements**|**65(90)**|

|05|SELECTION STATEMENTS|73(98)|
|---|---|---|
|**05.1**|**Logical Expressions**|**74(99)**|
||Relational Operators|74(99)|
||Equality Operators|75(100)|
||Logical Operators|75(100)|
|**05.2**|**The _if_ Statement**|**76(101)**|
||Compound Statements|77(102)|
||The _else_ Clause|78(103)|
||Cascaded _if_ Statements|80(105)|
||Program: Calculating a Broker's Commission|81(106)|
||The "Dangling _else_" Problem|82(107)|
||Conditional Expressions|83(108)|
||Boolean Values in C89|84(109)|
||Boolean Values in C99|85(110)|
|**05.3**|**The _switch_ Statement**|**86(111)**|
||The Role of the _break_ Statement|88(113)|
||Program: Printing a Date in Legal Form|89(114)|

|06|LOOPS|99(124)|
|---|---|---|
|**06.1**|**The _while_ Statement**|**99(124)**|
||Infinite Loops|101(126)|
||Program: Printing a Table of Squares|102(127)|
||Program: Summing a Series of Numbers|102(127)|
|**06.2**|**The _do_ Statement**|**103(128)**|
||Program: Calculating the Number of Digits in an Integer|104(129)|
|**06.3**|**The _for_ Statement**|**105(130)**|
||_for_ Statement Idioms|106(131)|
||Omitting Expressions in a _for_ Statement|107(132)|
||_for_ Statements in C99|108(133)|
||The Comma Operator|109(134)|
||Program: Printing a Table of Squares(Revisited)|110(135)|
|**06.4**|**Exiting from a Loop**|**111(136)**|
||The _break_ Statement|111(136)|
||The _continue_ Statement|112(137)|
||The _goto_ Statement|113(138)|
||Program: Balancing a Checkbook|114(139)|
|**06.5**|**The Null Statement**|**116(141)**|

|07|BASIC TYPES|125(150)|
|---|---|---|
|**07.1**|**Integer Types**|**125(150)**|
||Integer Types in C99|128(153)|
||Integer Constants|128(153)|
||Integer Constants in C99|129(154)|
||Integer Overflow|130(155)|
||Reading and Writing Integers|130(155)|
||Program: Summing a Series of Numbers (Revisited)|131(156)|
|**07.2**|**Floating Types**|**132(157)**|
||Floating Constants|133(158)|
||Reading and Writing Floating-point Numbers|134(159)|
|**07.3**|**Character Types**|**134(159)**|
||Operations on Characters|135(160)|
||Signed and Unsigned Characters|136(161)|
||Arithmetic Types|136(161)|
||Escape Sequences|137(162)|
||Character-Handling Functions|138(163)|
||Reading and Writing Characters using _scanf_ and _printf_|139(164)|
||Reading and Writing Characters using _getchar_ and _putchar_|140(165)|
||Program: Determining the Length of a Message|141(166)|
|**07.4**|**Type Conversion**|**142(167)**|
||The Usual Arithmetic Conversions|143(168)|
||Conversion During Assignment|145(170)|
||Implicit Conversions in C99|146(171)|
||Casting|147(172)|
|**07.5**|**Type Definitions**|**149(174)**|
||Advantages of Type Definitions|149(174)|
||Type Definitions and Portability|150(175)|
|**07.6**|**The _sizeof_ Operator**|**151(176)**|

|08|ARRAYS|161(186)|
|---|---|---|
|**08.1**|**One-Dimensional Arrays**|**161(186)**|
||Array Subscripting|162(187)|
||Program: Reversing a Series of Numbers|164(189)|
||Array Initialization|164(189)|
||Designated Initializers|165(190)|
||Program: Checking a Number for Repeated Digits|166(191)|
||Using the _sizeof_ Operator with Arrays|167(192)|
||Program: Computing Interest|168(193)|
|**08.2**|**Multidimentional Arrays**|**169(194)**|
||Initializing a Multidimentional Array|171(196)|
||Constant Arrays|172(197)|
||Program: Dealing a Hand of Cards|172(197)|
|**08.3**|**Variable-Length Arrays (C99)**|**174(199)**|

|09|FUNCTIONS|183(208)|
|---|---|---|
|**09.1**|**Defining and Calling Functions**|**183(208)**|
||Program: Computing Averages|184(209)|
||Program: Printing a Countdown|185(210)|
||Program: Printing a Pun (Revisited)|186(211)|
||Function Definitions|187(212)|
||Function Calls|189(214)|
||Program: Testing Whether a Number is Prime|190(215)|
|**09.2**|**Function Declarations**|**191(216)**|
|**09.3**|**Arguments**|**193(218)**|
||Argument Conversions|194(219)|
||Array Arguments|195(220)|
||Variable-Length Array Parameters|198(223)|
||Using _static_ in Array Parameter Declarations|200(225)|
||Compound Literals|200(225)|
|**09.4**|**The _return_ Statement**|**201(226)**|
|**09.5**|**Program Termination**|**202(227)**|
||The _exit_ Function|203(228)|
|**09.6**|**Recursion**|**204(229)**|
||The Quicksort Algorithm|205(230)|
||Program: Quicksort|207(232)|

|10|PROGRAM ORGANIZATION|219(244)|
|---|---|---|
|**10.1**|**Local Variables**|**219(244)**|
||Static Local Variables|220(245)|
||Parameters|221(246)|
|**10.2**|**External Variables**|**221(246)**|
||Example: Using External Variables to Implement a Stack|221(246)|
||Pros and Cons of External Variables|222(247)|
||Program: Guessing a Number|224(249)|
|**10.3**|**Blocks**|**227(252)**|
|**10.4**|**Scope**|**228(253)**|
|**10.5**|**Organizing a C Program**|**229(254)**|
||Program: Classifying a Poker Hand|230(255)|

## Advanced Features of C

|11|POINTERS|241(266)|
|---|---|---|
|**11.1**|**Pointer Variables**|**241(266)**|
||Declaring Pointer Variables|242(267)|
|**11.2**|**The address and Indirection Operators**|**243(268)**|
||The Address Operator|243(268)|
||The Indirection Operator|244(269)|
|**11.3**|**Pointer Assignments**|**245(270)**|
|**11.4**|**Pointers as Arguments**|**247(272)**|
||Program: Finding the Largest and Smallest Elements in an Array|249(274)|
||Using _const_ to Protect Arguments|250(275)|
|**11.5**|**Pointers as Return Values**|**251(276)**|

|12|POINTERS AND ARRAYS|257(282)|
|---|---|---|
|**12.1**|**Pointer Arithmetic**|**257(282)**|
||Adding an integer to a Pointer|258(283)|
||Subtracting an integer from a Pointer|259(284)|
||Subtracting One Pointer from Another|259(284)|
||Comparing Pointers|260(285)|
||Pointers to Compound Literals|260(285)|
|**12.2**|**Using Pointers for Array Processing**|**260(285)**|
||Combining the _*_ and _++_ Operators|262(287)|
|**12.3**|**Using an array Name as a Pointer**|**263(288)**|
||Program: Reversing a Series of Numbers (Revisited)|264(289)|
||Array Arguments (Revisited)|265(290)|
||Using a Pointer as an Array Name|266(291)|
|**12.4**|**Pointers and Multidimensional Arrays**|**267(292)**|
||Processing the Elements of a Multidimensional Array|267(292)|
||Processing the Rows of a Multidimensional Array|268(293)|
||Processing the Columns of a Multidimensional Array|269(294)|
||Using the Name of a Multidimensional Array as a Pointer|269(294)|
|**12.5**|**Pointers and Variable-Length Arrays (C99)**|**270(295)**|

|13|STRINGS|277(302)|
|---|---|---|
|**13.1**|**String Literals**|**277(302)**|
||Escape Sequences in String Literals|278(303)|
||Continuing a String Literal|278(303)|
||How String Literals Are Stored|279(304)|
||Operations on String Literals|279(304)|
||String Literals Versus Character constants|280(305)|
|**13.2**|**String Variables**|**281(306)**|
||Initializing a String Variable|281(306)|
||Character Arrays versus Character Pointers|283(308)|
|**13.3**|**Reading and Writing Strings**|**284(309)**|
||Writing Strings Using _printf_ and _puts_|284(309)|
||Reading Strings Using _scanf_ and _gets_|285(310)|
||Reading Strings Character by Character|286(311)|
|**13.4**|**Accessing the Characters in a String**|**287(312)**|
|**13.5**|**Using the C String Library**|**289(314)**|
||The _strcpy_ (String Copy) Function|290(315)|
||The _strlen_ (String Length) Function|291(316)|
||The _strcat_ (String Concatenation) Function|291(316)|
||The _strcmp_ (String Comparison) Function|292(317)|
||Program: Printing a One-Month Reminder List|293(318)|
|**13.6**|**String Idioms**|**296(321)**|
||Searching for the End of a String|296(321)|
||Copying a String|298(323)|
|**13.7**|**Arrays of Strings**|**300(325)**|
||Command-Line Arguments|302(327)|
||Program: Checking Planet Names|303(328)|

|14|THE PREPROCESSOR|315(340)|
|---|---|---|
|**14.1**|**How the Preprocessor Works**|**315(340)**|
|**14.2**|**Preprocessing Directives**|**318(343)**|
|**14.3**|**Macro Definitions**|**319(344)**|
||Simple Macros|319(344)|
||Parameterized Macros|321(346)|
||The _#_ Operator|324(349)|
||The _##_ Operator|324(349)|
||General Properties of Macros|325(350)|
||Parentheses in Macro Definitions|326(351)|
||Creating Longer Macros|328(353)|
||Predefined Macros|329(354)|
||Additional Predefined Macros in C99|339(355)|
||Empty Macro Arguments|331(356)|
||Macros with a Variable Number of Arguments|332(357)|
||The _\_\_func\_\__ Identifier|333(358)|
|**14.4**|**Conditional Compilation**|**333(358)**|
||The _#if_ and _#endif_ Directives|334(359)|
||The _defined_ Operator|335(360)|
||The _#ifdef_ and _#ifndef_ Directives|335(360)|
||The _#elif_ and _#else_ Directives|336(361)|
||Uses of Conditional Compilation|337(362)|
|**14.5**|**Miscellaneous Directives**|**338(363)**|
||The _#error_ Directive|338(363)|
||The _#line_ Directive|339(364)|
||The _#pragma_ Directive|340(365)|
||The _\_Pragma_ Operator|341(366)|

|15|WRITING LARGE PROGRAMS|349(374)|
|---|---|---|
|**15.1**|**Source Files**|**349(374)**|
|**15.2**|**Header Files**|**350(375)**|
||The _#include_ Directive|351(376)|
||Sharing Macro Definitions and Type Definitions|353(378)|
||Sharing Function Prototypes|354(379)|
||Sharing Variable Declarations|355(380)|
||Nested Includes|357(382)|
||Protecting Header Files|357(382)|
||_#error Directives in Header Files|358(383)|
|**15.3**|**Dividing a Program into Files**|**359(384)**|
||Program: Text Formatting|359(384)|
|**15.4**|**Building a Multiple-File Program**|**366(391)**|
||Makefiles|366(391)|
||Errors During Linking|368(393)|
||Rebuilding a Program|369(394)|
||Defining Macros Outside a Program|371(396)|

|16|STRUCTURES, UNIONS, AND ENUMERATIONS|377(402)|
|---|---|---|
|**16.1**|**Structre Variables**|**377(402)**|
||Declaring Structure Variables|378(403)|
||Initializing Structure Variables|379(404)|
||Designated Initializers|380(405)|
||Operations on Structures|381(406)|
|**16.2**|**Structure Types**|**382(407)**|
||Declaring a Structure Tag|383(408)|
||Defining a Structure Type|384(409)|
||Structures as Arguments and Return Values|384(409)|
||Compound Literals|386(411)|
|**16.3**|**Nested Arrays and Structures**|**386(411)**|
||Nested Structures|387(412)|
||Arrays of Structures|387(412)|
||Initializing an Array of Structures|388(413)|
||Program: Maintaining a Parts Database|389(414)|
|**16.4**|**Unions**|**396(421)**|
||Using Unions to Save Space|398(423)|
||Using Unions to Build Mixed data Structures|399(424)|
||Adding a "Tag Field" to  a Union|400(425)|
|**16.5**|**Enumerations**|**402(427)**|
||Enumeration Tags and Type Names|402(427)|
||Enumeration as Integers|403(428)|
||Using Enumerations to Declare "Tag Fields"|404(429)|

|17|ADVANCED USES OF POINTERS|413(438)|
|---|---|---|
|**17.1**|**Dynamic Storage Allocation**|**414(439)**|
||Memory Allocation Functions|414(439)|
||Null pointers|414(439)|
|**17.2**|**Dynamically Allocated Strings**|**416(441)**|
||using _malloc_ to Allocate Memory for a String|416(441)|
||Using Dynamic Storage Alloacation in String Functions|417(442)|
||Arrays of Dynamically Allocated Strings|418(443)|
||Program: printing a One-Month Reminder List (Revisited)|418(443)|
|**17.3**|**Dynamically Allocated Arrays**|**420(445)**|
||Using _malloc_ to Allocate Storage for an Array|420(445)|
||The _calloc_ Function|421(446)|
||The _realloc_ Function|421(446)|
|**17.4**|**Deallocating Storage**|**422(447)**|
||The _free_ Function|423(448)|
||The "Dangling Pointer" Problem|424(449)|
|**17.5**|**Linked Lists**|**424(449)**|
||Declaring a Node Type|425(450)|
||Creating a Node|425(450)|
||The _->_ Operator|426(451)|
||Inserting a Node at the Beginning of a Linked List|427(452)|
||Searching a Linked List|429(454)|
||Deleting a Node from a Linked List|431(456)|
||Ordered Lists|433(458)|
||Program: Maintaining a Parts Database (Revisited)|433(458)|
|**17.6**|**Pointers to Pointers**|**438(463)**|
|**17.7**|**pointers to Functions**|**439(464)**|
||Function Pointers as Arguments|439(464)|
||The _qsort_ Function|440(465)|
||Other Uses of Function Pointers|442(467)|
||Program: Tabulating the Trigonometric Functions|443(468)|
|**17.8**|**Restricted Pointers (C99)**|**445(470)**|
|**17.9**|**Flexible Array Members (C99)**|**447(472)**|

|18|DECLARATIONS|457(482)|
|---|---|---|
|**18.1**|**Declaration Syntax**|**457(482)**|
|**18.2**|**Storage Classes**|**459(484)**|
||Properties of Variables|459(484)|
||The _auto_ Storage Class|460(485)|
||The _static_ Storage Class|461(486)|
||The _extern_ Storage Class|462(487)|
||The _register_ Storage Class|463(488)|
||The Storage Class of a Function|464(489)|
||Summary|465(490)|
|**18.3**|**Type Qualifiers**|**466(491)**|
|**18.4**|**Declarators**|**467(492)**|
||Deciphering Complex Declarations|468(493)|
||Using Type Definitions to Simplify Declarations|470(495)|
|**18.5**|**Initializers**|**470(495)**|
||Uninitiated Variables|472(497)|
|**18.6**|**Inline Functions (C99)**|**472(497)**|
||Inline Definitions|473(498)|
||Restrictions on Inline Functions|474(499)|
||Using Inline Functions with GCC|475(500)|

|19|PROGRAM DESIGN|483(508)|
|---|---|---|
|**19.1**|**Modules**|**484(509)**|
||Cohesion and Coupling|486(511)|
||Types of Modules|486(511)|
|**19.2**|**Information Hiding**|**487(512)**|
||A Stack Module|487(512)|
|**19.3**|**Abstract Data Types**|**491(516)**|
||Encapsulation|492(517)|
||Incomplete Types|492(517)|
|**19.4**|**A Stack Abstract Data Type**|**493(518)**|
||Defining the Interface for the Stack ADT|493(518)|
||Implementing the Stack ADT Using a Fixed-Length Array|495(520)|
||Changing the Item Type in the Stack ADT|496(521)|
||Implementing the Stack ADT using a Dynamic Array|497(522)|
||implementing the Stack ADT Using a Linked List|499(524)|
|**19.5**|**Design Issues for Abstract Data Types**|**502(527)**|
||Naming Conventions|502(527)|
||Error Handling|502(527)|
||Generic ADTs|503(528)|
||ADTs in Newer Languages|503(528)|

|20|LOW-LEVEL PROGRAMMING|509(534)|
|---|---|---|
|**20.1**|**Bitwise Operators**|**509(534)**|
||Bitwise Shift Operators|510(535)|
||Bitwise Complement, _And_, Exclusive _Or_, and Inclusive _Or_|511(536)|
||Using the Bitwise Operators to Access Bits|512(537)|
||Using the Bitwise Operators to Access Bit-Fields|513(538)|
||program: XOR Encryption|514(539)|
|**20.2**|**Bit-Fields in Structures**|**516(541)**|
||How Bit_Fields are Stored|517(542)|
|**20.3**|**Other Low-Level Techniques**|**518(543)**|
||Defining Machine-Dependent Types|518(543)|
||Using Unions to Provide Multiple Views of Data|519(544)|
||Using Pointers as Addresses|520(545)|
||Program: Viewing Memory Locations|521(546)|
||The _volatile_ Type Qualifier|523(548)|

## The Standard C Library

|21|THE STANDARD LIBRARY|529(554)|
|---|---|---|
|**21.1**|**Using the Library**|**529(554)**|
||Restrictions on Names Used in the Library|530(555)|
||Functions Hidden by Macros|531(556)|
|**21.2**|**C89 Library Overview**|**531(556)**|
|**21.3**|**C99 Library Changes**|**534(559)**|
|**21.4**|**The _<stddef.h>_ Header: Common Definitions**|**535(560)**|
|**21.5**|**The _<stdbool.h>_ Header (C99): Boolean Type and Values**|**536(561)**|

|22|INPUT/OUTPUT|539(564)|
|---|---|---|
|**22.1**|**Streams**|**540(565)**|
||File Pointers|540(565)|
||Standard Streams and redirection|540(565)|
||Text Files versus Binary Files|541(566)|
|**22.2**|**File Operations**|**543(568)**|
||Opening a File|543(568)|
||Modes|544(569)|
||Closing a File|545(570)|
||Attaching a File to an Open Stream|546(571)|
||Obtaining File Names from the Command Line|546(571)|
||Program: Checking Whether a File Can Be Opened|547(572)|
||Temporary Files|548(573)|
||File Buffering|549(574)|
||Miscellaneous File Operations|551(576)|
|**22.3**|**formatted I/O**|**551(576)**|
||The _...printf_ Functions|552(577)|
||_...printf_ Conversion Specification|552(577)|
||C99 Changes to _...printf_ Conversion Specifications|555(580)|
||Examples of _...printf_ Conversion Specifications|556(581)|
||The _..scanf_ Functions|558(583)|
||_...scanf_ Format Strings|559(584)|
||_..scanf_ Conversion Specifications|560(585)|
||C99 changes to _...scanf_ Conversion Specifications|562(587)|
||_scanf_ Examples|563(588)|
||Detecting End-of-File and Error Conditions|564(589)|
|**22.4**|**Character I/O**|**566(591)**|
||Output Functions|566(591)|
||Input Functions|567(592)|
||Program: Copying a File|568(593)|
|**22.5**|**Line I/O**|**569(594)**|
||Output Functions|569(594)|
||Input Functions|570(595)|
|**22.6**|**Block I/O**|**571(596)**|
|**22.7**|**File Positioning**|**572(597)**|
||Program: Modifying a File of Part Records|574(599)|
|**22.8**|**String I/O**|**575(600)**|
||Output Functions|576(601)|
||Input Functions|576(601)|

|23|LIBRARY SUPPORT FOR NUMBERS AND CHARACTER DATA|589(614)|
|---|---|---|
|**23.1**|**The _<float.h>_ Header: Characteristics of Floating Types**|**589(614)**|
|**23.2**|**The _<limits.h>_ Header: Sizes of Integer Types**|**591(616)**|
|**23.3**|**The _<math.h>_ Header (C89): Mathematics**|**593(618)**|
||Errors|593(618)|
||Trigonometic Functions|594(619)|
||Hyperbolic Functions|595(620)|
||Exponential and Logarithmic Functions|595(620)|
||Power Functions|596(621)|
||Nearest Integer, Absolute Value, and Remainder Functions|596(621)|
|**23.4**|**The _<math.h>_ Header (C99): Mathematics**|**597(622)**|
||IEEE Floating-Point Standard|598(623)|
||Types|599(624)|
||Macros|600(625)|
||Errors|600(625)|
||Functions|601(626)|
||Classification Macros|602(627)|
||Trigonometric Functions|603(628)|
||Hyperbolic Functions|603(628)|
||Exponential and Logarithmic Functions|604(629)|
||Power and Absolute Value Functions|605(630)|
||Error and Gamma Functions|606(631)|
||Nearest Integer Functions|606(631)|
||Remainder Functions|608(633)|
||Manipulation Functions|608(633)|
||Maximum, Minimum, and Positive Difference Function|609(634)|
||Floating Multiply-Add|610(635)|
||Comparison Macros|611(636)|
|**23.5**|**The _<ctype.h>_ Header: Character Handling**|**612(637)**|
||Character-Classification Functions|612(637)|
||Program: Testing the Character-Classification Functions|613(638)|
||Character Case-Mapping Functions|612(637)|
||Program: Testing the Case-Mapping Functions|614(639)|
|**23.6**|**The _<string.h>_ Header: String Handling**|**615(640)**|
||Copying Functions|616(641)|
||Concatenation Functions|617(642)|
||Comparison Functions|617(642)|
||Search Functions|619(644)|
||Miscellaneous Functions|622(647)|

|24|ERROR HANDLING|627(652)|
|---|---|---|
|**24.1**|**The _<assert.h>_ Header: Diagnostics**|**628(653)**|
|**24.2**|**The _<errno.h>_ Header: Errors**|**629(654)**|
||The _perror_ and _stderror_ Functions|630(655)|
|**24.3**|**The _<signal.h>_ Header: Signal Handling**|**631(656)**|
||Signal Macros|631(656)|
||The _signal_ Function|632(657)|
||Predefined Signal Handlers|633(658)|
||The _raise_ Function|634(559)|
||Program: Testing Signals|634(559)|
|**24.4**|**The _<setjmp.h>_ Header: Nonlocal Jumps**|**635(660)**|
||Program: Testing _setjmp/longjmp_|636(660)|

|25|INTERNATIONAL FEATURES|641(666)|
|---|---|---|
|**25.1**|**The _<locale.h>_ Header: Localization**|**642(667)**|
||Categories|642(667)|
||The _setlocale_ Function|643(668)|
||The _localeconv_ Function|644(669)|
|**25.2**|**Multibyte Characters and Wide Characters**|**647(672)**|
||Multibyte Characters|648(673)|
||Wide Charactes|649(674)|
||Unicode and the Universal Character Set|649(674)|
||Encodings of Unicode|650(675)|
||Multibyte/Wide-Character Conversion Functions|651(676)|
||Multibyte/Wide-String Conversion Functions|653(678)|
|**25.3**|**Digraphs and Trigraphs**|**654(679)**|
||Trigraphs|654(679)|
||Digraphs|655(680)|
||The _<iso646.h>_ Header: Alternative Spellings|656(681)|
|**25.4**|**Universal Character Names (C99)**|**656(681)**|
|**25.5**|**The _<wchar.h>_ Header (C99): Extended Multibyte and <br />Wide-Character Utilities**|**657(682)**|
||Stream Orientation|658(683)|
||Formatted Wide-Character Input/Output Functions|659(684)|
||General Wide-String Utilities|662(687)|
||Wide-Character Time-Conversion Functions|667(692)|
||Extended Multibyte/Wide-Character Conversion Utilities|667(692)|
|**25.6**|**The _<wctype.h>_ Header (C99): Wide-Character <br/>Classification and Mapping Utilities**|**671(696)**|
||Wide-Character Classification Function|671(696)|
||Extensible Wide-Character Classification Functions|672(697)|
||Wide-Characters Case-Mapping Functions|673(698)|
||Extensible Wide-Character Case-Mapping Functions|673(698)|

|26|MISCELLANEOUS LIBRARY FUNCTIONS|677(702)|
|---|---|---|
|**26.1**|**The _<stdarg.h>_ Header: Variable Arguments**|**677(702)**|
||Calling a Function with a Variable Argument List|679(704)|
||The _v...printf_ Functions|680(705)|
||The _v...scanf_ Functions|681(706)|
|**26.2**|**The _<stdlib.h>_ Header: General Utilities**|**682(707)**|
||Numeric Conversion Functions|682(707)|
||Program: testing the Numeric Conversion Functions|684(709)|
||Pseudo-Random Sequence Generation Functions|686(711)|
||Program: Testing the Pseudo-Random Sequence Generation Functions|687(712)|
||Communication with the Environment|687(712)|
||searching and Sorting Utilities|689(714)|
||Program: Determining Air Mileage|690(715)|
||Integer Arithmetic Functions|691(716)|
|**26.3**|**The _<time.h>_ Header: Date and Time**|**692(717)**|
||Time Manipulation Functions|693(718)|
||Time Conversion Functions|695(720)|
||Program: Displaying the Date and Time|698(723)|

|27|ADDITIONAL C99 SUPPORT FOR MATHEMATICS|705(730)|
|---|---|---|
|**27.1**|**The _<stdint.h>_ Header (C99): Integer Types**|**705(730)**|
||_<stdint.h>_ Types|706(731)|
||Limits of Specified-Width Integer Types|707(732)|
||Limits of Other Integer Types|708(733)|
||Macros for Integer Constants|708(733)|
|**27.2**|**The _<inttypes.h>_ Header (C99): Format Conversion of Integer Types**|**709(734)**|
||Macros for Format Specifiers|710(735)|
||Functions for greatest-Width Integer Types|711(736)|
|**27.3**|**Complex Numbers (C99)**|**712(736)**|
||Definition of Complex Numbers|713(738)|
||Complex Arithmetic|714(739)|
||Complex Types in C99|714(739)|
||Operations on Complex Numbers|715(740)|
||Conversion Rules for Complex Types|715(740)|
|**27.4**|**The _<complex.h>_ Header (C99): Complex Arithmetic**|**717(742)**|
||_<complex.h>_ Macros|717(742)|
||The _CX\_LIMITED\_RANGE_ Pragma|718(743)|
||_<complex.h>_ Functions|718(743)|
||Trigonometric Functions|719(744)|
||Hyperbolic Functions|720(745)|
||Exponential and Logarithmic Functions|721(746)|
||Power and Absolute-Value Functions|721(746)|
||Manipulation Functions|722(747)|
||Program: finding the Roots of a Quadratic Equation|722(747)|
|**27.5**|**The _<tgmath.h>_ Header (C99): Type-Generic Math**|**723(748)**|
||Type-Generic Macros|724(749)|
||Invoking a Type-Generic Macro|725(750)|
|**27.6**|**The _<fenv.h>_ Header (C99): Floating-Point Environment**|**726(751)**|
||Floating-Point Status Flags and Control Modes|727(752)|
||_<fenv.h>_ Macros|727(752)|
||The FENV\_ACCESS Pragma|728(753)|
||Floating-Point Exception Functions|729(754)|
||Rounding Functions|730(755)|
||Environment Functions|730(755)|

## Reference
||||
|---|---|---|
|**Appendix A**|**C Operators**|**735(760)**|
|**Appendix B**|**C99 versus C89**|**737(762)**|
|**Appendix C**|**C89 versus K&R C**|**743(768)**|
|**Appendix D**|**Standard Library Functions**|**747(772)**|
|**Appendix E**|**ASCII Character Set**|**801(826)**|
||**Bibliography**|**803(828)**|
||**Index**|**807(832)**|
