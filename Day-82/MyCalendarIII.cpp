class MyCalendarThree {
private:
	map<int, int> mp;
public:
	MyCalendarThree() {

	}

	int book(int start, int end) {
		mp[start]++;
		mp[end]--;
		int maxBooking = 0, sum = 0;
		for(auto &x : mp) {
			sum += x.second;
			maxBooking = max(maxBooking, sum);
		}
		return maxBooking;
	}
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */