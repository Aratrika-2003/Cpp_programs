/* This is the Meeting class definition
class Meeting {
public:
    int start, end;
    Meeting(int start, int end) {
        this->start = start;
        this->end = end;
    }
};
*/
bool compare(Meeting* a,Meeting* b)
{
	return (a->end < b->end);
}
int getMaxMeetings(vector<Meeting*> &meetings) 
{
    // add your logic here
	sort(meetings.begin(),meetings.end(),compare);
	int time = meetings[0]->end,count = 1;
	
	for(int i = 0; i < meetings.size(); i++)
	{
		if(meetings[i]->start >= time)
		{
			count++;
			time = meetings[i]->end;
		}
	}
	return count;
}
