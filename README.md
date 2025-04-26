# Bresenhams-Circle-Generation-Algorithm
###Description 
Let's understand how the Bresenham's circle generation algorithm works –
Point Generation − The algorithm starts at 90° and moves towards 45°. It decides which pixel to light up next based on two possible actions:
Move one unit in the x-direction − Move one unit in both the x-direction and negative y-direction
Decision Variable To choose between these actions, the algorithm uses a decision variable 'd'. This variable helps determine which pixel is closest to the true circle.
Eight-Way Symmetry − The algorithm uses eight-way symmetry. This means it only calculates points for one octant of the circle, as given in the above figure for the octates. Then it reflects these points to create the full circle.
### Algorithm 
Here is a step-by-step breakdown of Bresenham's Circle Algorithm −
                 Step 1 − Start the algorithm
                 Step 2 − Declare variables: p, q (circle centre coordinates), x, y (current point), r (radius), d (decision variable)
                 Step 3 − Input the radius r
                Step 4 − Calculate initial d: d = 3 - 2r
                Step 5 − Set initial x = 0, y = r
                Step 6 − Check if x y. If true, stop. If false, continue
                Step 7 − Plot eight symmetric points
                Step 8 − Update d and x (and y if needed)
                Step 9 − Go back to step 6
                Step 10 − End the algorithm 
