#ifndef GEOMETRY_H
#define GEOMETRY_H 

// EulerAngle struct
typedef struct {
  float pitch;
  float yaw;
  float roll;
} EulerAngle;

// Vector in 2 dimensions
// Holds integers
typedef struct {
  int x;
  int y;
} Vector2Di;

// Vector in 2 dimensions
// Holds floats
typedef struct {
  float x;
  float y;
} Vector2Df;

// Vector in 3 dimensions
// Holds integers
typedef struct {
  int x;
  int y;
  int z;
} Vector3Di;

// Vector in 3 dimensions
// Holds floats
typedef struct {
  float x;
  float y;
  float z;
} Vector3Df;

#endif
