# Percolation Analysis

>**Percolation:** Given a composite systems comprised of randomly distributed insulating and metallic materials: what fraction of the materials need to be metallic so that the composite system is an electrical conductor? Given a porous landscape with water on the surface (or oil below), under what conditions will the water be able to drain through to the bottom (or the oil to gush through to the surface)? Scientists have defined an abstract process known as percolation to model such situations.

Modeling this as a N-by-N grid we can derive an array of N*N for modeling. 
```
[1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0]
```
Can be modeled as:
```
1	0	0	1	0	
0	0	1	0	0	
0	0	0	0	0	
0	0	1	0	0	
0	0	0	0	0	
```


![percolates-yes.png](percolates-yes.png)

`Virtual Top`

`Virtual Bottom`
