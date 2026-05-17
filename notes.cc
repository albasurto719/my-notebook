
#include <iostream>


int main(){
}


//   0.2-Intro to programs and programming languages
//  Computer Program - 16
//  Running/Executing - 19
//  Hardware - 20
//  CPU,Memory,Storage devices - 23-25
//  Software - 26
//  Platform - 28
//  Portable/Porting - 34/35
//  Machine language - 37


// Computer Program- a sequence of instructions that directs a computer to perform certain actions in a specified order
// these programs are usually written in a programming language, a language designed to facilitate the writing of instruction
// for computers.
// When a computer is performing the actions described by the instructions in a computer program, we say it is (running) or (executing) the program
// Programs are executed on the computers (hardware), which consists of physical components that make up
// a computer
// Notable pieces of hardware found on devices include:
// - A CPU(central processing unit, often called the "brain" of the computer), which executes the instructions
// - Memory, where computer programs are loaded prior to execution
// - Storage devices(a hard drive, SSD, or flash memory) which retain information(including installed programs) even when the computer is turned off.
//
// In contrast the term (software) broadly refers to the programs on a system that are designed to be executed on hardware
// In modern computing, programs often interact with more than just hardware, they interact with other software on the system
// The term (platform) refers to a compatible set of hardware and software that provides an enviroment for software to run
// Ex. the term PC is used to mean the platform consisitng of a Windows OS running on an x86-family CPU.
//
// Platforms often provide useful services for the programs running on them. For example, a desktop application might
// request the operating system give them a chuck of free memory , creacte a file over there, or play a sound
//
// If a program uses capabilites or services provied by the platofrm, it becomes dependent on that platofrm, and cannot be run on other
// platform, and cannot be run on other platforms without modification. A program that can be easily transfered
// from one platform to another is said to be (portable).
//
// The act of modifiying a program so that it runs on a different platform is called (porting).
// A computer's CPU is incapable of understanding C++ instead, CPU's are only capable of proccessing instructions
// written in (machine language)
//
// The set of all possible machine language instructions that a given CPU can understand is
// an (instruction set)
// Ex of sample machine language: 1011000 0110001
// Each instruction is understood by the CPU as a command to do a very specific job such as "compare these two numbers"
// or "copy this number into that memory location". Back when computers were first invented, programmers
// write in computer language, Each instruction is composed of a sequence of 1s and 0s. Each individual 0 or 1
// is called a (binary digit) or (bit). The number of bits in a machine language instruction varies- for example, some
// CPUs (e.g x86, Arms64)has its own machine language, and this machine language is not compatiable with
// the machine language of other CPU families. This means machine language programs written for one CPU
// family cannot be run on CPUs from a different family.


// Machine language instructions (100011 001000) are ideal for a CPU, but are difficult for people to understand
// So an (assembly language) often called (assmebly) is a programming language rhat essentially functions as a more
// human readable machine language.Here is the same instruction as above in x86 assembly language:
// mov al, 0x61
// Since CPU's do not get assembly language, the assembly programs must be translated to machine code
// before they are executed. This is done by a program called an (assembler).
// Because each assembly language instruction is designed to mirror an equivalent machine language instruction
// its pretty straightforward
// Just like each CPU family has its own machine language, each CPU family also has it own assembly language.
// This means there are many different assembly languages, although conceptually similar, different assembly
// languages support different instructions, use different naming conventions
// Machine langauages and assembly languages are considered low level languages
// These have some notable downsides:
// Programs written in a low level language are not portable.








//      1.1 - Statements and the structure of a program
//  Statement - 80
//  Function - 82
//  Identifier - 88
//  Preprocessor directive - 97
//  Function body - 104
//  Syntax - 110
//  Syntax error - 112
// A computer program is a sequence of instructions that tell the computer what to do. A (statement) is
// a type of instruction that causes the program to perform some action
// In C++ statements are typically grouped into units called (function). A fucntion is a collection of
// statements that get executed sequentially(in order, from top to bottom) As you learn to write your
// own programs, you'll be able to create your own functions and mix and match statemnts in any way
// you'll please
// Programs typically terminate(finish running) after the last statement inside funtion main has been executed
// (though many programs may abort early in some circumstances, or do some cleanup afterwards.)
// In programming, the name of a function( or object, type, template) is called its (identifier)
//
// #include <iostream>


// int main()
//    {
//      std::cout << "Hello world";
//       return 0;
//    }
// Line 1 is a special type of line called a (preprocessor directive). This #include preprocessor directive
// indicates that we would like to use the contents of the iostream library, which is the part of the C++
// standard library that allows us to read and write text from/to the console. We need this line in
// order to use std::cout on line 5.
// Line 3 tells the compiler that were going to write a fucntion whose name identifier is main. As you learned
// above, every C++ program must have a main function or it will fail to link. This function will produce a value
// whose type is int
// Line 4 and 7 tell the compiler which lines are apart of the main function, this is called the (function body)
// Line 6 is a return statement. When an executable program finishes running, the prgram sends a value back
// to the operating system in order indicate whether it ran succesfully. This statemnt returns the integer value 0,
// to the operating system in order to indicate whether it ran succesfully or not, This particular return statement returns
// the integer value 0, to the operating system, which means everything went ok.
// The set of rules that describe how specific words can be arrnaged to form valid sentences in a language
// is called (syntax). For ex. "My house painted is blue" is a syntax error, because the ordeering is wrong.
// C++ has a syntax, which describes how the elements of your program must be written if failed, it will produce
// a (syntax error) such as forgetting a semi colon at the end of a statement.
/*   






     1.3 - Introduction to objects and variables
   Data - 129
   Value - 135
   RAM - 150
   Object - 161
   Variable - 167
   Compile time - 173
   Defined - 176
   Runtime - 179
   Allocation - 182
   Data type - 190
How do programs actually proudece results? They do so by mainupulating(reading, chaning, and writing)
(data). Data is any informtion that can be moved, processed, or stored by a computer
A program can aquire data to work in different ways: from a file or databse, over a network
or the from the user prvoiding input on a keyboard. Ex. THe text "Hello world" was inserted
directly into the source code of the program, providing data for the program to use. The program
then manipulates this data by sending it to the monitor to be displayed
In programming, a single piece of data is called a (value) sometimes called a data value. Ex
Numbers (5 or -6.7)
Characters, which are placed between single quotes("H" or "$") only a single symbol may be used
Text, which must be placed between double-quotes("Hello" or "H") contains 0 or more characters
Values that are placed directly into the source code are called (literals)
#include <iostream>
int main(){
std::cout << 5; //prints the literal "5"
std::cout << -6.7; //prints the literal "-6.7"
std::cout << "H"; // prints the literal character "H"
std::cout << "Hello"; // prints the literal text "Hello"


return 0;}
 }
The main memory in a computer is called Random Access Memory(called RAM). When we run a program,
the operating system loads the program into RAM. Any data that is hardcored into the program itself is loaded
at this point.
The operating system also reserves some additional RAM for the program to use while it is running.
Common uses for this memory are to store values entered by the user, to store data read in from
read in from a file or a network, or to store values calculated while the program is running(Ex.
the sum of two numbers) so they can be used again later
Think of RAM as a series of numbered boxes that can used to store data while the program is running
In C++ direct memeory access is discouraged, instead we keep access memory indirectly through an (object)
An object represents a region of storage(RAM or CPU register) that can hold a value. Objects also have associated properties
Rather than say "go get the value stored in mailbox number 7532", we can say, " go get the value stored by this object" and let
the compiler figure out where and how to retrieve the value. This means we can focus on using objects to store
and retrieve values.
An object with a name is a (variable)
The most comming way to tell the compiler we need use a variable
Heres an ex of defining a variable named x:
int x // define a variable named x (of type int)
At (compile time) when the program is being compiled, the compiler encouters this statment it makes
a note to itself that we want a variable with the name x, and that variable has a data type of int
A variable created via a definition statemnt is said to be (defined) at the point where the defintion statement
is placed, eight now all variable should be defined inside functions like main()
At (runtime) when the program is loaded into memory and run, each object is given an actual storage location
(such as RAM, or a CPU register) that it can use to store values
The process of reserving storage for an objects use is called (allocation). Once allocation has occured
the object can has been created and can be used
For the sake of an example lets say that variable x is instantiated at memory location 140, whenever the program uses
variable x, it will access the value in memory location 140
When the above program runs executons starts at the top of main(). Memory for x is allocated. Then the program ends


A (data type) determines what kind of value the object will store lie int, double, string


     1.4- Variable assignment and initialization
    assignment - 209
    assignment operator - 209
    copy assingment - 215
    initialization - 233
    initializer - 234
    default initialzaiton -254
    copy initialization - 258
    direct initialzation - 263
    list-initialzaiton - 266
    value initizalization - 286
    zero initialization - 288
    instantiation -296
    instance - 297
    [maybe_unused]] - 314
   
After a variable has been defined, you can give it a value using the = operator. This process is
called (assignment) and the = operator is called the (assignemnt operator)


   int width; // define an int variable named width
   width = 5; // assignemnt of value 5 to the variable width


By defualt, assignemnt coppies the value on the right hand side of the = operator to the variable on the
left hand side of the operator. This is called (copy assignment)


   int width;
   width = 5;
   std::cout << width;
   width = 7;
   std::cout << width;
   return 0;}
 This prints: 57
When the program is run, executon begins at the top of the main function and proceeds sequentially.
First memory for variable width is allocated. We then assing the value 5. when we output width, it prints 5
to the console. When we then assign value 7 to width, any prior value(in this case 5) is overwitten. Thus
we output width again, this time it prints 7.


One downside is that assigning a variable to just defined kbect required two statements. one to define the
variable and another to assign the variable.


We can combine this, When an object is defined, you can optionally provide an initial value for the
object. The process of specifyting an intitial value for an object is called (initialization), and
the syntax used to initialzie an object is called an (initializer).


For ex. THe following statement both defines a variable anmed width(of type int) and initializes it with
with the value 5


   int main() {
       int width {5}; // defines variable width and initialzies w/ intial value of 5
       std::cout << width; //prints 5


       return 0;
   }
In the above initialzation of variable width, {5} is the initializer and 5 is the inital value


There are 5 common forms of initialziaton in C++
int a; //default initalization no intiialziaer;
int b = 5; // copy-initialization(inital value after equals sign)
int c (6); // direct-initialization(initial value in parenthesis)
int d {7}; // direct-list-initialization (initial value in braces)
int e {}; // value-initialization (empty braces)


When no initializer is provided(such as variable a above), this is called a (default-initialization)
in many cases, default initialzation performs no initialization, and leaves the variable with an
indeterminate value(a value that is not predictable, sometimes called a garbage value)


When an intial value is provided after an equals sign, this is called (copy-initizalization).
   int width = 5; // copy-initialization of value 5 into variable width
Much like copy assingment, this copies the value on the right hand side of the equals into the variable
being create don the left hand side.Variabke width is initilized with value 5.


When an inital value is provided inside parenthesis, this is called (direct initialzation)
   int width(5); // direct initialization of value 5 into vairbale width
For use of curly braces you use (list-initialzaiton), or uniform/brace intialization


There are 2 forms:
   int width {5}; //direct list initizlaiton of inital vlaur 5 into vairbale width
   int height = {6}; //copy list initzalitztion of intial value 6 into vairablr height


   List initizalization was used to privde a way to initizalize objects with a lsit of values rahter
   than a single value


   W/ list initialization is that" narrowing conversions" are dissallowed. This means that if you try
   to list-initialize a variable using a vlaue that the variable cant hold, it will compile error.


   int w1{4.5} compile error: list- init does not allow narrowing conversions
   int w2 = 4.5; compiles: w2 copy-initialized to value 4
   int w3 (4.5); compiles w3: direct-initialized to value 4


 w1 cant work as were trying to initialze a double as an int
 w2 and w3 work cause they drop the .5 and initalize the vairbale with vlaue 4
  When a variable is initizalzed using an empty set of braces, a special form of initialziation called
 (value initizalization) takes place. In most cases value initialziation will implicitly initialzie the variable
 to zero(or whatever value is closest to zero for a given type). In cases where zeroring occurs this is called
 (zero initialization)


   int width{}; // value initialization/zero inutualzaiton to value 0


Use {0} when your actually using 0 and use {} when the objects value is temporary and will be replaced


The term (instantiation) is a term that means a variable has been created(allocated) and initialized,
An instaitated object is sometimes called an (instance). Most often, this term is applied to class type
objects, but it is occasionally applied to objects of other types as well.
You can do any of these ( but they lwk look stupid af)
   int a = 5, b = 6;          // copy-initialization
   int c ( 7 ), d ( 8 );      // direct-initialization
   int e { 9 }, f { 10 };     // direct-list-initialization
   int i {}, j {};            // value-initialization
Some warning might be given out if varaibale is initialized but not used like in


   int x {5}; //variable x defined
       /but not used anywhere
   reutrn 0;
}
You will get an error like this :
prog.cc: In function 'int main()':
prog.cc:3:9: error: unused variable 'x' [-Werror=unused-variable]


To help in case we want a cariable unused we use [[maybe_unused]] attribute, which allowd us to tell
the compiler were ok with a variable being unused


   int main(){
    [[maybe_unused]] double pi {3.14159}; dont complain
    [[maybe_unused]] double gravity {9.8}; dont complain


    std::cout << pi <<\'n';


    //Compiler won \t complain about gravity not being used


    return 0;
   }


       1.5 - std::cout , sts::cin
   std::cout << "enter two numbers serperated by a space"
   int x{}; // define variable to x to huld user input ( and value initialzie it)
   int y{}; // define variable to y to hold user input (and value initialzie it)
   std::cin >> x >> y; // get two numbers and store in variable x and y respectively


   std::cout << "You entered" << x << "and" << y << '\n';


   return 0;
}


This produces the output:
   Enter two numbers seprerated by a space: 5 6
   You entered 5 and 6


std::cout is buffered as statemnts in our program request that output be sent to the console,but hte output
is not sent to the console immediately. Instead, the requested output" gets in line" and is stored in
a region of memeory set asside to collec such requests(called a buffer). THe buffer is flushed, meaning
all of the data collected in the buffer is transferred to its destination.


This also means that if your program crashes, aborts, or is paused before the buffer is finished, any output
still waiting in the buffer will not be displayed.


We know outputting data is actually a two stage process:
   The data from each output request is added (to the end) of an output buffer
   Later, data from(the front of) the output buffer is flushed to the output device(the console)


Inputting data is a two stage process:
   THe individual characters you enter as input are added to the end of an input buffer(inside cin).
   THe enter key(pressed to submit data) is also stores as a '\n' character
   The extraction operator >> removes characters from the front of the input buffer and converts
   them into a value that is assigned( via copy assingnment ) to the associated variable


   so
   int x{}
   std::cin x;
   means thats the orogram will wait for input. if inputed 4. the input 4 goes into the input buffer
   and the value 4 is extracted to variable x


   here some more examples
   int x{}
   std::cin >> x;
   if user types in 5a and enter, 5a\n will be added to the buffer. 5 will be extracted, converted to an integer,
   and assigned to variable x. a\n will be left in the input buffer for the next extraction
   If user types b and enter b\n would be added to the buffer. Because b is not a valid integer, no
   characters can be extracted, so this is an extraction failure. Variable x would be set to 0, and
   future extractions will fail until the input stream is cleared and x is assinged to 0


       1.6 Uninitialized variables and undefined behavior
           Uninitialized variable - 382
           Undefined behavior - 417
           Implementation - 422
           Unspecified behavior - 436
 
   When a variable that is not initialzied is given a memory address to use to store data, the default value
   of that vairable is whatever value happens to already be in that memory address! A variable that has not
   been given a knownvalue(through initilization and assignment is called an (uninitialized variable)


   consider this:


   int main(){
   int x;  // this variable is unitialized because we haven't given it a value


   // print the value of x to the screen
   std::cout << x << '\n';


   return 0;
   }


   In this case the computer will assign some unused memory to x. It will then send the value residing in that
   memory location to std::cout which will print the value. But what value will it print. Different variables.


   If your compiler wont let you compile and run the above program due to an error, here is a soultion


   void doNothing(int&) // DOnt worry about & is for no, were using it to trick the compiler into thinking
   {
   }                                                                            varaible x is used


   int main() {
       int x; // uninitialzied variable


       doNothing(x); // makes the compiler think were assigning a value to this variable


       std::cout << x << '\n';


       retunr 0;
   }


   Using uninitialized variables is one of the most common mistakes that novice programmers make, and
   unfortunately, it can also be one of the most challenging to debug( if vlaue is assigned to a reasonable value like 0).


   Using the value from an uninitialized variable is our first example of (undefined behavior). Undefined
   behavior is the result of executing code whose behavior is not well defined by the c++ language. In this
   case, the c++ language doesnt have any rules determining what happens if you use the value of a variable
   that has not been given a known value.


   A specific compiler and the associated standard library it comes with an (implementation). In some cases,
   the C++ language standard allows the implementation to determine how some aspect of the language will behave, so
   that the compiler can choose a behavior that is efficnet for a given platform.Behavior that is defined by
   the implementation is called (implementation defined behavior.


    Heres an example of implementation defined behavior:


    int main()
    {
       std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes
       return 0;
    }
   On most platforms, this will produce 4 on others it may produce 2


   (Unspecified behavior) is almost identical to implementation defined behavior, as it means our program
   may not work as expected if compiled on a different compiler.


           1.7 Keywords and naming identifiers
   C++ reserves a set of 92 words for its own use. These words are (keywords), and each of these keywords
   has a special meaning within the C++ language


   alignas         const_cast          int            static_assert
   alignof         continue            long           static_cast
   and             co_await            mutable        struct
   and_eq          co_return           namespace      switch
   asm             co_yield            new            template
   auto            decitype            noexcept       this
   bitand          default             not            thread_local
   bitor           delete              not_eq         throw
   bool            do                  nullptr        true
   break           double              operator       try
   case            dynamic_cast        or             typedef
   catch           else                or_eq          typeid
   char            enum                private        typename
   char8_t         explicit            protected      union
   char16_t        export              public         unsigned
   char32_t        extern              register       using
   class           false               reinterpret_cast    virtual
   compl           float               requires       void
   concept         for                 return         volatile
   const           friend              short          wchar_t
   consteval       goto                signed         while
   constexpr       if                  sizeof         xor
   constinit       inline              static         xor_eq


   The name of a variable is called an identifer


   1.9 - Introduction to literals and operators
       literal
   Consider the two statements:
   std::cout << "Hello World";
   int x {5};


   What are "Hello World" and 5? They are literals. A (literal) is a fixed value that has been inserted
   directly into the source code


   Literals and variable both have a value(and type). Unlike a variable(whose value can be set and changed
   through initialization and assignment respectively), the value of a literal is fixed and cannot be changed
   The literal 5 always has value 5. This is why literals are called constants


   std::cout << 5 << '\n'; //prints the value of a literal
   int x{5};
   std::cout << x << '\n'; //prints the value of a variable
   return 0;


   For the first it will print the value of 5 to the console and geenrate the code that causes std::cout
   to print value 5 This is compiled in the executable and can be used directly


   On line 7, were creating a variable named x and initializing it with value 5. The compiler will generate
   code that copies the literal value 5 into whatever memory location is given to x. This prints the value at
   memeory location of x


   In mathmatics, an (operation) is a process involving zero or more input values(called operands)
   that produce a new value(called an output value).This specific operation to be preformed is
   denoted by a symbol called an (operator).


   Ex. We all learned that 2 + 3 = 5. In this case, the literals 2 and 3 are the operands, and the
   symbol + is the operator that tells us to apply mathematical addition on the operands to produce the
   new value 5


   std::cout << 1 + 2 << '\n';


   return 0;


   This program, the literals 1 and 2 are operands to the + plus operator which produces the output value
   3. The output value of an operation is often called a (return value).


   The number of operands that an operator takes as input is called the operators (arity). Operators in C++
   (Unary) operators act on one operand. An ex of a unary operator is the - operator. For example given -5,
   operator-, takes litetal operand 5 and flips it sign to produce new output value -5


   (Binary) operators act on two operators (often called left and right, as the left operans appers on the
   left side of the operator, and the right operand appears on the right side of the operator). An ex
   of a binary operator is the + operator. For ex given 3 + 4, operator + takes the left operand 3 and the
   right operand 4 and applies mathmatical addition to produce new output value 7. The insertion(<<)
   and extraction (>>) operators are binary operators, taking std::cout or std::cin on the left side, and
   the value to output or variable to input to on the right side.


   (Ternary) operators act on three operands. There is only one of these in C++(the conditional operator)


   (Nullary) operators act on zero operands. There is also only one of these in C++(the throw operator)


   Operators can be chanined together such that the output of one operator can be used as the input for
   another operator. For example, given the following 2 * 3 + 4. the multiplication operator goes first,
   omg ts is just fucking pemdas why am i wrting this


   Most operators in C++ just use their operands to calculate a return value. For example, -5 produces
   return value -5 and 2 + 3 produces return value 5. Some operators have addtional behaviors. An operator
   (or function) that has some observable effect beyond producing a return value is said to have a
   (side effect). FOr ex, x = 5 has the side effect of assigning value 5 to variable x. THe changed value
   of x is observable (by printing the value of x) even after the operator has finsihed executing.
   std::cout << 5 has the side effect of printing 5 to the console. We can observe the fact that 5
   has been printed to the console even after std::cout << 5 has finished executing
  
   Snip- x = y = 5 evaluates as x = (y=5.First assigns 5 to y. This opartation then reutrn y, which can
   then be assigned to x


   1.10 Introduction to expressions
       Expression - 564
       Evaluation - 565
       Result - 566
       Return value - 566
       Expression statement - 596
       Subexpression - 612
       Full expression - 615
       Compound expression - 618
   int five(){         // five() is a fucntion that returns the value 5
       return 5;
   }
   int main()
   {
       int a{2};
       int b{2 + 3};
       int c{ (2 * 3) + 4};
       int d {b}
       int e{ five() }; // intialize variable e with function return value 5


       return 0;


   All these initializers make use of: literals, variables, operators, and fucntion calls.
   These initializers all make use of an expression


   In programming, an (expression) is a non-empty sequence of literals, variables, operators, and
   function calls that calculates a value. The process executing is called (evaluation), and the
   resulting value produced is called the (result) of the expression( also called the (reuturn value).


   When an expression is evaluated, each of the terms inside the expression are evaluated, until a
   single value remains. Here are some examples of different kinds of expressions, with comments indicating
   how they evaluate
   2               // 2 is a literal that evaluates to value 2
   "Hello world"   // "Hello world" is a literal that evaluates to text "Hello World"
   x               // x is a variable that evaluates to the value held by variable x
   2 + 3           // operator+ uses operands 2 and 3 to evaluate to value 5
   five()          // evaluates to the return value of function five()


   Expressions do not end in a semicolon and cannot be compiled by themselves. For example, if you were
   to try to compile the expression x = 5, your compiler would complain(porbably about a missing semicolon)
   Rather, expressions are always evaluated as part of statements


   For example, take this statement:


       int x{2 + 3}; // 2 +3 is an expression that has no semicolon -- the semicolon is at the end of
       the statement containing the expression


   If you were to break this statement down into its syntax, it would like this:
       type identifier { expression};
   type could be any valid type(we chose int) identifer could be any valid name(we chose x). And
   expression could be any valid expression( we chose 2 + 3, which uses two literals and an operator)


   Certain expressions(such as x = 5) are used primarily for their side effects( assinging the value 5 to x)
   rather than the value that they produce


   However we mentioned above that expressions cannot be executed by themselves -- they must exist as a
   part of a statemnt. Fortunately, its trivival to convert any expression into an equivalent statement.
   An (expression statement) is a statemnt that consists of an expression followed by a semicolon. When the
   expression statemnt is executed, the expression will be evaluated.


   Thus, we can take any expression(such as x = 5) and turn it into an expression statement x = 5; that
   will compile


   When an expression is used in an expression statement, any result generated by the expression is
   discarded(because its not used). For example, when the expression x = 5 evaluates, the return value
   of operator= is discarded. And thats fine because we wanted to assign 5 to x


   We need to talk abouyt specific kinds of expressions.For this purpose, we will define some related terms.


   2        // 2 is a literal that evaluates to value 2
   2 + 3    // 2 + 3 uses operator+ to evaluate to value 5
   x = 4 + 5 // 4 + 5 evaluates to value 9, which is then assigned to variable x


   Simplifying a bit, (subexpression) is an expression used as an operand. For example, the subexpressions
   of x = 4 + 5 are x and 4 + 5. The subexpressions of 4 + 5 are 4 and 5.


   A (full expression) is an epression that is not a subexpression. All three expressions above
   (2, 2 + 3, and x = 4 + 5) are full expressions.


   In casual language, a (compund expression) is an expression that contains two or more uses of operators.
   x = 4 + 5 is a compound expression because it contains both operator= and operator+


   Chapter 2- The road to conjunction functions


     2.1 Introduction to functions
           Function - 630
           User defined Functions - 636
           Function call - 643
           Caller - 648
           Function header - 657
   We defined a function as a collection of statements that execute sequentially. While its true,
   that definition doesnt provide much insight as to why functions are useful. A (function) is a
   reusable sequence of statements designed to do a particular job


   We have an executable program must have a fucntion named main() which is where the program starts
   execution when it is run. However as programs start to get longer, putting all the code in main()
   becomes harder to manage. FUnctions provide a way for us to split our programs into small, modular
   chunks. Functions you write on your own are called (user defined functions)


   Consider a case that might occur in real life. your reading a book when you remebr you need to make
   a call. You put a bookmark in your book, make the call, and when your done with the call you return
   back to the place you bookmarked and conitnue your book where you left off.


   C++ works similar in which a program will be executing statments sequentially inside one function when
   it encounters a fucntion call. A (function call) tells the CPU to interrupt the current function
   and execute another function. The CPU essentially "puts a bookmark" at the current point of execution,
   executes the function named in the function call, and then (returns) to the point it bookmarked and resumes
   execution


   The function initiating the function call is the (caller), and the function being executed is the calle. A
   fucntion call is also sometimes called an invocation


   heres the syntax:
   returnType functionName() // This is the function header (tells the compiler hey I here huzz)
   {
       // This is the fucntion body (tells the compiler what the function does)
   }


   The first line is the (function header), and it tells the compiler abou the exisitence of a function
   the fucntions name, and some other infirmation(like the retrun type)


   Heres a sample:


   void doPrint(){        // definition of a user defined function doPrint()
       std::cout << "In doPrint()\n"
   }
   int main(){
       std::cout << "Starting main"
       doPrint();      // Interrupt main() by making a function call to doPrint(). main() is the caller
       std::cout << "Ending main"


       return 0;
   }
   program outputs:
       Starting main()
       In doPrint()
       Ending main()
  
   The program starts w/ starting main but gets interuppted by doPrint and prints whats in there and then
   returns to print Ending main and the program ends


   One useful thing about functions is that they can be called more than once.


   void doPrint(){       
       std::cout << "In doPrint()\n"
               }
   int main() {
   std::cout << "Starting main";
   doPrint(); // doPrint() called for the first time
   doPrint(); // doPrint() called for the second time
   std::cout << "Ending main";


   return 0;
   }
   program outputs:
   Starting main
   In doPrint()
   In doPrint()
   Ending main


   Youve already seen the function main() can call other functions. In the following program,
   function main() calls function doA() which calls function doB()


   void doB(){
       std::cout << "In doB()";
   }
   void doA(){
       std::cout << "Starting doA()";


       doB();


       std::cout << "Ending doA()";
   }


   int main(){
   std::cout << "Starting main";


   doA();


   std::cout <<  "Ending main()";


   return 0;
   }
   This produces:
   Starting main()
   Starting main()
   In doB()
   Ending doA()
   Ending main()


   A function whose definition is placed inside another function is a (nested function). Unlike some
   other programming languages, In C++, functions cannot be nested. The folloeing program is not legal.


   int main(){
       void foo() // Illegal this function is nested inside function main()
       {
       std::cout << "foo?"
       }
       foo(); // function call to foo()


       return 0;
   }
       the proper way to write this is
       void foo()
       {
       std::cout << "foo?";
       }
       int main(){
      
       foo();


       return 0;
       }
           2.2 Function return values(value-returning functions)
               Return type - 801
               Return statemnt - 807
               Return expression - 809
               Return value - 814
               Return by value - 816
               Status code - 873
               Value returning function - 880
               Return statement - 881
       int main() {
       std::cout << "Enter an integer: ";
       int num{};
       std::cin >> num;


       std::cout << num << "doubled is: " << num * 2;


       return 0;
       }
   The program is composed of two parts. FIrst we get a value from the user. Then we tell the user
   what the double value is.


   Lets write this w/ functions in mind


  void doPrint() {
   std::cout << "Enter an integer: ";
   int input{};
   std::cin >> input;
}
int main() {
   doPrint();
  
   int num{}; // How do we get the value from getValueFromUser() and use it to initialize this variable?
  
   std::cout << num << " doubled is: " << num * 2;


   return 0;
}
   This doesn't quite work. When function getValueFromUser is called, the user is asked to enter
   an integer as expected. But the value they enter is lost when getValueFromUser terminates and control
   returns to main. Variable num never gets initialized with the value the user entered, and so the
   program always prints the asnwer 0


   What were missing is some way for getValueFromUser to return the value the user entered back to main
   so that main can make use of that data


   When you write a user-defined function, you get to determine whether your function will return a value
   back to the caller, two things are needed.


   First your function has to indicate what type of value will be returned. This is done by setting the
   function's (return type), which is the type that is defined before the functions name. In the example
   above, function getValueFromUser has a return type of void( meaning no value will be returned to caller)
   and function main has a return type of int(meaning a value of type int will be returned to the caller)
   Note that this doesn't determine what specific value is returned it only determines what type of
   value will be returned


   Second, inside the function that will return a value, we use a (return statement) to indicate the specific
   value being returned to the caller. The return statement consists of the return keyword. followed by
   an expression(sometimes called a (return expression)) ending with a semicolon.


   When the return statement is executed:
       The return expression is evaluated to produce a value.
       The value produced by the return expression is copied back to the caller. This copy is called
       the (return value) of the function
       The function exits, and control reutrns to the caller
   THe process of returning a copied value back to the caller is named (return by value)


   A value returning function will return a value each time it is called,


   Lets take a look at a simple function that returns an integer value, and a sample program that calls it:


   // int is a return type
   // A return type of int means the function will return some integer value to the caller(the specific
   value is not specified here)
   int returnFive(){
   return 5;
   }


   int main()
   {
   std::cout << returnFive(); // prints 5
   std::cout << returnFive() + 2; // prints 7


   returnFive(); // okay: the value 5 is returned, but is ignored since main() doesn't do anything
   with it


   return 0;
   }
   when run this program will print
   5
   7
   Execution starts at the top of main. In the first statemnt, the function call to returnFive() is
   evaluated, which results in function returnFive() being called. The return expression 5 is evaluated to
   produce the value 5, which is returned back to the caller an printed to the console via std::cout


   in the second one same thing but you add + 2


   In the third one returnFive is called, resulting in the value 5 being returned back to the caller.
   Howeverm function main does nothing with the return value.


   So we can fix this with
   int getValueFromUser(){
   std::cout << "Enter an integer: "
   int input{};
   std::cin >> input;


   return input; //return the value the user entered back to the caller
   }


   int main() {
       int num {getValueFromUser() }; // initialize num with the return value of getValueFromUser()


       std::cout << num << " doubled is: " << num * 2 << '\n';


       return 0;
   }
  
   main() cant be anything other than int
   Explicit function calls to main() are disallowed


   You might be wondering why we return 0 from main(), and when we might return something else


   The return value from main() is sometimes called a (status code)( or less commonly and exit or return code)
   The status code is used to signal whether your program was successful or not


   By convention, a status code of 0 means the program ean normally


   A non zero status code is often used to indicate some kind of failure


   A function that returns a value is called a (value returning function). A fucntion is value returning
   if the return type is anything other than void. It must return a value of that type (using a return statement)
   otherwise undefined behavior will result


   Heres an ex that produces undefined behavior
   int getValueFromUser(){
   std::cout << "Enter an integer: "
   int input{};
   std::cin >> input;
           // note: no return statement
   }


   int main() {
       int num {getValueFromUser() }; // initialize num with the return value of getValueFromUser()


       std::cout << num << " doubled is: " << num * 2 << '\n';


       return 0;
   }
   A modern compiler should generate a warning because getValueFromUser is defined as returning an int
   but no return statemnt is provided. Running such a program would produce undefined behavior


   The only exception to the rule that a value returning fucntion must retuan a value via return statement
   is for function main(). This function will implicitly return the value 0 if no return statemnt is provided.
   That said, it is best practice to explicitly return a value from main, both to show your intent, and for
   consitency with the other functions( which will exhibit undefined behavior if a return value is not specified)


   A value returning fucntion can onyl return a single value back to the caller each time it is called.Note
   that the value provided in a return statement doesn't need to be literal-- it can be the result of any
   valid expression, including a variable or even a call to another fucntion that returns a value. In
   the getValueFromUser() example above, we returned a variable input, which held the number the user input
   There are different ways to work around the limitation of functions only being able to return a sing value
      
   The meaning of the value returned by a function is determined by the functions author. Some functions use
   return values as status codes, to indicate whether they successed or failed.Other fucntions return a
   calculated or selected value. Other functions return nothing


   like w/ return input // return the value the user entered back to the caller


   Now we can illustatre a good case for function reuse


   int main() {
   int x{};
   std::cout << "Enter an integer: ";
   std::cin >> x;


   int y{};
   std::cout << "Enter an integer: ";
   std::cin >> y;


   std::cout << x << " + " << y << " = " << x + y << '\n';


   return 0;
   }


   This program works but violates one of the central tenats of good programming Dont repeat yourslef(DRY)


   Why?, if we watned to change the text "Enter an integer" to something else, w ehave to update in two
   locations. And what if we want to initialize 10 variable instead of 2?


   int getValueFromUser(){
   std::cout << Enter an integer;
   int input{};
   std::cin >> input;


   return input;
   }
   int main(){
   int x{getValueFromUser()};
   int y{getValueFromUser()};
   std::cout << x << " + " << y << " = " << x + y;
   }


   This prints
   Enter an integer: 5
   Enter an itneger: 7
   5 + 7 = 12


       2.3 Void functions(non-value returning functions)
           void - 962
           non value returning function/void function - 974
   Functions are not required to return a value back to the caller. To tell the compiler that a
   function does not return a value, a return type of (void) is used


   For ex.
       void printHi(){
       std::cout << "Hi" << '\n";
       // this function does not return a value so no return statement is needed
       }
       int main() {
       printHi();


       return 0;
       }
   A function that does not return a value is called a (non value returning fucntion) or a (void function)


   A void function will automatically return to the caller at the end of a function. No return statemnt required
   A return statement can be used in a void fucntion, such a statement will cause the function to return
   the caller at the point where the return statemnt is executed. This is the same thing that happens
   at the end of the function anyway. Consequently, putting an empty return statement at the end
   of a void fucntion is fuckin stupid


   void printHi()
   {
       std::cout << "Hi" << '\n';
   }
   int main() {
       printHi(); // okay: fuction printHi() is called, no value is returned


       std::cout << printHi(); // compile error


       return 0;
   }
       The first call to printHi works since its not requiring a value. Since the function doesnt return
       a value its fine


       The second call however, wont even compile. Function printHi() is void type so ti dont return a value
       and its trying to send the valur to std::cout, sice std::cout doesn't know how to handle this


   However this ok
   int returnFive(){
    reutrn 5;
   }
    int main(){
    std::cout << returnFive();
    }


   Returning a value from a void function is a compile error
   void PrintHi(){
   std::cout << "In print" << '\n';
   return 5; //compile error you know why
   }


       2.4 Intro to function parameters and arguments
           function parameter - 1066
           argument - 1090
           copy initialization - 1096
           pass by value - 1097
           value parameters - 1098
           unreferecned parameters - 1239
           unamed parameter - 1258
   int getValueFromUser() {
   std::cout << "Enter an integer: ";
   int input{};
   std::cin >> input;
   return input;
   }
   int main(){
       int num{getValueFromUser()};
       std::cout << num << " doubled is: " << num * 2 << '\n';
       return 0;
   }
       But what if we wanted to put the output line into its own function as well? you might try
       int getValuefromUser(){
           std::cout << "enter int";
           int input{};
           std::cin >> input;


           return input;
       }
       //This wont compile
       void printDouble(){
       std::cout << num << "doubled is " << num * 2 << '\n';
       }


       int main() {
           int num{getValueFromUser()};


           printDouble();


           return 0;
       }


   This wont compile becasue fucntion printDouble doesnt know what identifier num is. Then you
   might try defining num as a variable inside function printDouble();


       void PrintDouble(){
           int num{}; // we add this line
           std::cout << num << "doubled is: " << num * 2 << '\n';
       }
   While this compiles it still dosnt work as it jsut prints 0 as no value is entered into num


   How do we fix this, for ex if we wanted to wirte a function to add two numbers, we need some way
   to tell the function which two numbers to add when we call it. Otherwise, how would the fucntion know
   what to add.


   A (function parameter) is a variable used in the header of a function. Function parameters work
   almost identically to variables defined inside the function, but with one difference, they are initialized
   with a value provided by the caller of the function


   They are used by palcing them in th eparenthesis adrer the fucntion name
   Heres an ex


   void doPrint() // this takes no parameters
   {
       std::cout << "In doPrint()\n";
   }
  
   //This function takes one integer parameter named x the caller will supply the value of x
   void printValue(int x)
   {
   std::cout << x << '\n';
   }


   //This function has two integer parameters, one named x, and one named y
   // The caller will supply the value of both x and y
  
   int add(int x, int y){
   return x + y;
   }
   An (argument) is a value that is passed from the caller to the function when a fucntion call is made
   doPrint(); // this call has no arguments
   printValue(6); // 6 is the argument passed to fuction printValue()
   add(2,3); // 2 and 3 are the arguments passed to function add()


   When a function is called, all of the parameters of the function are created as variables, and
   the value of each of the arguments is copied into the matching parameter(using copy initialization).
   This process is called (pass by value). Function parameters that utilize pass by value are called
   (value parameters)


   For ex


   void printValue(int x, int y)
   {
   std::cout << x << '\n';
   std::cout << y << '\n';
   }
   int main(){
       printValues(6,7); // this function call has two arguments, 6 and 7


       return 0;
   }
  
   When function printValues is called with arguments 6 and 7, printValues parameter x is created and
   and initialized with the value of 6, and printValues parameter y is created and initialized with
   the value of 7.
  
   This prints the output
   6
   7


   We can now fic the code
  
   int getValueFromUser() {
   std::cout << "Enter an integer: ";
   int input{};
   std::cin >> input;
  
   return input;
  
   void printDouble(int value) // This function now has an integer parameter
   {
       std::cout << value << "doubled is: " << value * 2 << '\n';
   }


   }
   int main(){
       int num{getValueFromUser()};
       printDouble(num);
       return 0;
   }
  
   In this program, variable num is first initizalied with the value entered by the user. Then,
   function printDouble is called, and the value of argument num is copied into the value parameter of
   function printDouble. Function printDouble then uses the value of parameter value.


   In the above probelm we can see varaible num is only used once, to transport the return value
   of function getValueFromUser to the argument of the call to function printDouble


   we can simplify the code


   int getValueFromUser(){
       std::cout << "Enter an integer: ";
       int input{};
       std::cin >> input;
   }
  
   void printDouble(int value)
   {
       std::cout << value << "doubled is: " << value * 2 << '\n';
   }
  
   int main(){
       printDouble(getValueFromUser());


       return 0;
   }
  
   Now, were using the return value of function getValueFromUser directly as an argument to
   function printDouble


   By usign both parameters and a return value, we can create functions that take data as input,
   do some calcuation with it, and reutrn the value to the caller


   Here is an example of a very simple fucntion that adds two integers togethers and return the reudlt


   //add() takes two integers as parameters, and returns the result of their sum
   // The values of x and y are determined by the fucntion that calls add()
   int add(int x, int y)
   {
       return x + y;
   }
   // main takes no parameters
   int main();
   {
       std::cout << add(4,5) << '\n'; // Arguments 4 and 5 are passed to function add()
       return 0;
   }
   Execution starts at the top of main. When add(4,5) is evaluated, add is called w/ parameter x
   being initialized with value 4 and paramrter y being initialized with value 5.


   The return statement in function add evaluates x + y to produce the value 9, which is then returned
   back to main. This value of 9 is then sent to std::cout to be printed on the console
   output: 9


   In pictoral format
   int add(intx, int y)
   {           ;   ;   --- ---
       return x + y;
   }
               reutnr value 9
   int main()      |      ^  ^
   {               V      |  |
       std::cout << add(4,5) << '\n';
       return 0;
   }
  
   int add(intx, inty){
   return x + y;
   }


   int mulitply(int z, int w)
   {
       return z * w;
   }
       int main()
       {
           std::cout << add(4,5) << '\n'; // x + y = 9
           std::cout << add(1 + 2, 3 * 4) //within add() x=3, y=12, so x + y = 15


           int a{5};
           std::cout << add(a,a) << '\n'; //(5+5)


           std::cout << add(1, multiply(2,3)) << '\n'; // evaulates 1 + (2 * 3)
           std::cout << add(1, add(2,3)) << '\n'; // evaluates 1 + (2 + 3)
           reutrn 0;
       }
   the output is
   9
   15
   10
   7
   6
   for std::cout << add(1, multiply(2,3)) << '\n'; // evaluates 1 + (2 * 3)


   When the function beed sto get the y value it uses multiply(2,3) for that value for it equals to 6 and
   6 + 1 one equal 7,  hehe 67 Man fuck you


   In certain cases, you will encounter functions that have parameters that are not used in the body of the
   function. These are called (unreferenced parameters)


       void doSomething(int count) // warning: unreferenced parameter count
       {
           // This fucntion used to do something woth count but it is not used any longer
       }
  
        int main()
        {
       doSomething(4);


       return 0;
       }
  
   Just like with unused local variables, your compiler will probabaly warn that variable count has been
   defined but not used


   In a fucntion definition, the name of a function parameter is optional. Therefore, in cases where a fucntion parameter
   needs to exist but is not used in the body of the function, you can simply omit the name. A parameter without
   a name is called an (unnamed parameter)


   like
   void doSomething(int) // ok: unamed parameter will not generate warning
   {
   }


 2.5 Intro to local scope
   void
 Variables defined inside the body of a fucntion are called (local variables)( as opposed to
 global vairable which we'll talk about later)


   int add(int x, int y)
   {
       int z{x+y}; // z is a local variable


       return z;
   }
  In 1.3 we disicussed how a variable defintion such as int x; causes the vairbale to be instantiated
 when this statemnt is executed. Function paramters are created and initialized when the function is entered
 , and variable within the fucntion body are created and intialized at the point of definition
    For example:


       int add(int x, int y)// x and y are initalized here


           int z{x + y}; // z created and initialized here


       return z;


   So the naturanl follow up is when is an instanitated vairbale destroyed. Local variables are destroyed
   in the opposite order of creation at the end of the set of curly braces in which it is deifned( or
   for a function parameter, at the end of the function)


   int add(int x, int y)
   {
       int z{x + y};


       return z;
   } // z, y, and x destoryed here


   Much like a persons lifetime is defined to be the time between their birth and death, an objects
   (lifetime) is deifned to be the time between its creation and destruction.Note that variable creation
   and destruction happen when the program is running (called runtime) not at compile time, Therefore
   lifetime is a runtime property


   Heres a more complex program demonstarting the lifetime of the variable named x


   void doSomething(){
       std::cout << "Hello!\n";
   }
   int main(){
       int x{0}; // x's lifetime beigns here


       doSomething(); // x is still alive during this function call\


       return 0;
   } // x's lifetime ends here


In the above program, the lifetime of x runs from the point of definition to the end of function
main. This includes the time spent during the execution of function doSomething


What happens when an object is destroyed


In most cases nothing. The destoryed object simply becomes invalid


Any use of an object after it has been destoryed will result in undefined behavior


At some point adter destrcution, the memory used by the object will be (deallocated) meaning freed
up for reuse


An identifiers (scope) determines wjere the identifier can be seen and used within the source code. When an identifier
can be seen and used, we say it is (in scope). When an identifier can not be seen, we can not use it, and we say it
is (out of scope). Scope is a compile time property, and trying to use an identifier when it is not
in scope will result in a compile error


The identifier of a local variable has local scope. An identifier with (local scope) techincally (block scope)
is useable from the point of definition to the end of the innermost pair of curly braces contaitng the
identifier(or for function parameters, at the end of the function).


Heres a program demosntarting this scope of a variable x


void doSomthing() // x is not in scope in thsi function
void doSomething()
{
   std::cout << "Hello\n";
}


int main()
{
   // x can not be used here becaues its not in scope yet


   int x{0}; // x enters scope here and can now be used within this function


   doSomething();


   return 0;
}   // x goes out of scope here and can no longer be used


varible x enters scope at def x. x goes out of scope at the end of the innermost pair of curly braces
contating the identifier, which is the closing curyly brace of fucntion main(). Not that variable x
is not in scope anywhere inside of function doSomething. The fact that fucntion main calls function
doSomething is irrelevant in this context


The terms out of scope and going out of scope can be confusing to new programmers


An identifier is out of scope anywhere it cannot be accessed within the code. In the ex above the
identifier x is in scope from its point of definition to the end of the main function. The identifier x
is out of scope outside of that code region


The term "going out os scope" is typically applied to ibjects rather than identifiers. We say that an
object goes out scope at the end of the scope( the end curly brace) in which the object was instatntiated
In the exmaple above, the object named x goes out of scope at the end of the function main


A local variables lifetime ends at the point where it goes our og scope, so local variable
are destoryed at the point


Note not all type of vairbale goes out of scope are destoryed.


Heres another ex, lifetime is a runtime property and scope is a compile time property, so altough
we are talking about both in the same program, they are enforced at different points.


   int add(int x, int y) // x and y are create and enter scope
   {
       // x and y are only usuable within add()
       return x + y;
  }   // y and x go out of scope and are destoryed here


   int main(){
       int a{5}; // a is created, initialized, and enters scope here
       int b{6}; // b is created, initialized, and enters scope here


       // a and b are useable only within main()


       std::cout << add(a,b) << '\n'; // calls, add(5,6) where x = 5, y = 6


       return 0;
   } // b and a go out of scope and are destroyed here


   parameters x and y are created when the add function is called, can only be seen/used within
   function add, and are destroyed
  


'int* pta{new int(5)};
 std::cout << *pta << '\n';
 delete pta;
 int* ptr{};
 std::cout << ptr << '\n';
 int x{5};
 ptr = &x;
 std::cout << *ptr << '\n';
 ptr = nullptr;
 std::cout << ptr << '\n';
 someFunction(nullptr);
 std::set<int> numbers = {10,20,30};
 if (numbers.count(20)) {
   std::cout << "20 is in set" << '\n';'




   print<>(true);
   std::cout << '\n';
  print(true);
  std::cout << '\n';


  template <typename T>
void print(T x, int joe)
{
while(joe--){
   std::cout << x << '\n';
}
}
void print(std::string x) {
   std::cout << x;
}
   void printy(bool x)
{
   std::cout << x;
}


int main()
{
   print("j", 3);
 
  return 0;


  //"template <typename T, typename U>
class Pair{
   private:
   public:
   T first{};
   U second{};
};
template <typename T, typename U>
void print(Pair<T, U> p)
{
   std::cout << '[' << p.first << ',' << p.second << ']';
}


int main()
{
  Pair<int, double> p1{1,2.3};
  Pair<double, int> p2{4.5,6};
  Pair<int,int> p3{7,8};
  print(p1);
}


  
*/