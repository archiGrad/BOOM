struct point_attributes{
	vector scale;
	float pscale;
	vector position;
}


point_attributes generate_point(int iterator; vector minbound; vector maxbound;){
	int seed = (chi("seed") + 1) * (iterator + 1) * (int(ch("Frame")) + 1);
	float x = fit(random(seed * 123), 0, 1, minbound.x, maxbound.x);
	float y = fit(random(seed * 456), 0, 1, minbound.y, maxbound.y);
	float z = fit(random(seed * 789), 0, 1, minbound.z, maxbound.z);

	vector pos = set(x, y, z);
	point_attributes point_data;
	point_data.pscale = fit(random(iterator * chf("pscale_seed")),0,1,chf("pscale_min"),chf("pscale_max"));



	point_data.scale = set(1,1,1);
	point_data.position = pos;
	return point_data;
}




//functions volume wrabgle
vector get_data(int geo; string channel; vector P; float maxdist; int maxpnts){
        int handle = pcopen(geo, channel, P, maxdist, maxpnts);
        vector vec_data = pcfilter(handle, channel);
        return  vec_data;

}





















