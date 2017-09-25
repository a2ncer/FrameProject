# FrameProject

There are two input files: 
- file with ground truth objects od_gt.csv 
- file with candidates od_cnd.csv. 

These files describe objects from some video file, one object per line. Each object is defined by bounding box and belongs to some class (string) on some frame. Candidate’s class is assigned by detector with a confidence, a real number between 0 and 1.

**Format of ground truth file:** 
- frame no 
- class
- bounding box(left, top, width, height)

**Format of candidates file:**
- frame no
- class 
- confidence 
- bounding box(left, top, width, height)

Candidate can be compared only with ground truth object of the same class and the same frame number.

Let’s treat **candidate** as **detected**, if
```
AREA(<candidate bounding box> intersect <ground truth bounding box>)/AREA(<candidate bounding box> union <ground truth bounding box>) > 0.5.
```

If more than one candidate overlaps with the same ground truth object, only the one with the highest confidence counts as detected.

If few ground truth objects of the same class overlap, let's start from the largest area.

Count number of:
- detected ground truth objects;
- not detected ground truth objects;
- detected candidates;
- not detected candidates.

Implement in C++ building table of precision and recall for detector, that produced provided candidates for confidence at all defined range with step 0.1.

Code should be compilable  with recent gcc or clang.