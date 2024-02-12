# BOOM
boom project with wannes. sensor implementatie
## includes
1: test blinkercode for 32 wroom with, but power supply is not going tgrough microusb, but through the board.  this is so we can connect the board safely to ther terminal block. in the following example i connect the VCC and GND from a 5v convertedr inbto the VIN pin and ibn tot GND pin of the nmicrocontroller though a breadboard.
![img1](./media/a1.jpeg)
![img2](./media/a2.jpeg)

2: screw terminal breakoput board for esp32. kiCad diagram and schamatics.
    download symbol from snapeda: https://www.snapeda.com/parts/ESP32-DEVKIT-V1/Do%20it/view-part/?t=esp32%20devkitv1


# Board Schematics
[View Schematics PDF](./media/fuse_box_schematic.pdf)




# design:
design iterations are documented here
![img3](./media/1.png)



# Communication
[View PDF](./media/wannes_rens.pdf)


## inspiration:
install esp32 block  on bin rail
https://www.youtube.com/watch?v=UIU_M9MApd0

kiCad pcb layout: https://www.youtube.com/watch?v=3FGNw28xBr0

make an esp32 breakout block with terminal screws: https://www.youtube.com/watch?v=nSP0rKtDYko





### readme testing

```stl
solid cube_corner
  facet normal 0.0 -1.0 0.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 1.0 0.0 0.0
      vertex 0.0 0.0 1.0
    endloop
  endfacet
  facet normal 0.0 0.0 -1.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 0.0 1.0 0.0
      vertex 1.0 0.0 0.0
    endloop
  endfacet
  facet normal -1.0 0.0 0.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 0.0 0.0 1.0
      vertex 0.0 1.0 0.0
    endloop
  endfacet
  facet normal 0.577 0.577 0.577
    outer loop
      vertex 1.0 0.0 0.0
      vertex 0.0 1.0 0.0
      vertex 0.0 0.0 1.0
    endloop
  endfacet
endsolid
```



```topojson
{
  "type": "Topology",
  "transform": {
    "scale": [0.0005000500050005, 0.00010001000100010001],
    "translate": [100, 0]
  },
  "objects": {
    "example": {
      "type": "GeometryCollection",
      "geometries": [
        {
          "type": "Point",
          "properties": {"prop0": "value0"},
          "coordinates": [4000, 5000]
        },
        {
          "type": "LineString",
          "properties": {"prop0": "value0", "prop1": 0},
          "arcs": [0]
        },
        {
          "type": "Polygon",
          "properties": {"prop0": "value0",
            "prop1": {"this": "that"}
          },
          "arcs": [[1]]
        }
      ]
    }
  },
  "arcs": [[[4000, 0], [1999, 9999], [2000, -9999], [2000, 9999]],[[0, 0], [0, 9999], [2000, 0], [0, -9999], [-2000, 0]]]
}
```


```geojson
{
  "type": "FeatureCollection",
  "features": [
    {
      "type": "Feature",
      "id": 1,
      "properties": {
        "ID": 0
      },
      "geometry": {
        "type": "Polygon",
        "coordinates": [
          [
              [-90,35],
              [-90,30],
              [-85,30],
              [-85,35],
              [-90,35]
          ]
        ]
      }
    }
  ]
}
```



Here is a simple flow chart:

```mermaid
graph TD;
    A-->B;
    A-->C;
    B-->D;
    C-->D;
```



