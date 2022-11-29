/* This is the Train class definition
class Train {
public:
    int arrival, departure;
    Train(int arrival, int departure) {
        this->arrival = arrival;
        this->departure = departure;
    }
};
*/

int minPlatforms(vector<Train*> &trains) 
{
    // add your logic here
	int platform = 1,res = 1;
	
	//to check overlap
	for(int i = 0; i < trains.size(); i++)
	{
		platform = 1;//minimum 1 platform should be there
		for(int j = 0; j < trains.size(); j++)
		{
			//if overlapping,increase platforms
			if(i != j)
				if(trains[i]->arrival >= trains[j]->arrival && trains[j]->departure >= trains[i]->arrival)
					platform++;
			
		}
	}
	
	res = max(platform,res);
	
	return res;
}
