# Problem 5: Creating an Index

You are working for a publisher who wants to create indices for all of his passages. Each passage fits on one page, but spans multiple lines. For each passage, your boss has given you a list of terms. You have been tasked with creating a program that reads in the terms, and outputs the line numbers for which all of those terms appear. You are also required to provide a list of any terms not found in the passage.

### Input
Input will consist of terms, with one term per line. Terms can contain multiple words (e.g., small bough). The line following the last term will contain a zero. The line following zero will begin the passage. That will be line 1 of the passage. 

### Output
Output will consist of two sections: **Index** and **Missing Terms**. **Index** will list each term in the order it was given in the input file, followed by all of the line numbers for which the term appeared. **Missing Terms** will list any terms <u>not</u> found in the passage. If there are no missing terms, respond with "(None)".

### Assumptions
In the instance of phrases (e.g., small bough), you can assume that when searching the text, that the phrase will fall on the same line. 

You can also assume that the type case of the word is exactly the type case that will appear in the text. Thus, if you are given the word "river", you do not have to worry about cases of "River" such as would be found at the beginning of a sentence. Similarly, if you are given "Ant" you can ignore instances of "ant". 

No error checking required. All input will be valid.

### Sample Input
```
Ant
Dove
drink
hunter
life
river
small bough
stung
0
An Ant, going to a river to drink, fell in, and was 
carried along in the stream. A Dove pitied her condition, 
and threw into the river a small bough, by means of which 
the Ant gained the shore. The Ant afterward, seeing a man 
with a fowling-piece aiming at the Dove, stung him in the 
foot sharply, and made him miss his aim, and so saved the
Dove's life.
```
### Sample Output

```
Index:
 Ant: 1 4
 Dove: 2 5 7
 drink: 1
 life: 7
 river: 1 3
 small bough: 3
 stung: 5

Missing Terms:
 hunter
```