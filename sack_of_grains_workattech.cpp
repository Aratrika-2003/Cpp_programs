/* This is the Grain class definition
class Grain {
public:
    int weight, value;
    Grain(int weight, int value) {
        this->weight = weight;
        this->value = value;
    }
};
*/

bool compare(Grain *a,Grain *b)
{
	double r1 = (double)a->value/(double)a->weight;
	double r2 = (double)b->value/(double)b->weight;
	return r1 > r2;
}

double maxSackValue(vector<Grain*> &grains, int w) 
{
    // add your logic here
	double netprofit = 0.0;
	
	sort(grains.begin(),grains.end(),compare);
	
	for (int i = 0; i < grains.size(); i++) 
	{
        if (grains[i]->weight <= w) 
		    {
            w -= grains[i]->weight;
            netprofit += grains[i]->value;
        }
 
        else 
		    {
            netprofit += grains[i]->value * ((double)w / (double)grains[i]->weight);
            break;
        }
    }
	
	return netprofit;
 
}
