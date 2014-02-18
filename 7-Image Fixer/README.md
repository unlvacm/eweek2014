# Problem 7: Image Fixer

Your task is to develop a program that reads in a discolored "broken" image, and outputs the original fixed image. 

You will be using the ppm image format, with ASCII encoding, which is very simple. You will need a ppm image viewer to properly view the image format. A hex editor might also be useful, but it is not required. The following are a set of image viewers that you may employ to view the ppm file format on your respected system.

Windows Users: IrfanView
OSX Users: ToyViewer
Linux Users: The default image viewer should work fine. 

This is a reverse engineering problem. Try to find patterns and determine what the algorithm was used to encode this! Hint: It's quite simple. 

The PPM format consists of 'P3' on the first line. The width and height separated by spaces on the second line, and the color encoding scheme, which will always be '255' for our purposes. All of the data after is triplets of RGB encoded integers from 0 to 255, representing a pixel. Here is an example:

```
P3
640 480
0 34 53 255 255 255 0 0 0 43 45 23 ...
```

You may use newlines and any other whitespace character if it makes it easier for you. PPM uses whitespace only separators, but otherwise ignores it. <b>It's important to note that the provided sample files do have newline characters.</b>

You must write a program that reads in the scrambled image file, and outputs the unscrambled ppm image format. 

### Input and Output
Your input will consist of the image name, with a .ppm extension. Your program must use redirection to load the file in.

Your output will be the corrected image, and the file name is always: "imageFixed.ppm"

#### Sample Input
![Shibe Scrambled](shibe_scrambled.jpg)

#### Sample Output
![Shibe Fixed](imageFixed2.jpg)