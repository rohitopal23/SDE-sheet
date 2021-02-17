int findPlatform(int arr[], int dep[], int n)
{
	// Your code here
	vector<pair<int, char>>v;
	
	for(int i=0; i<n; i++){
	    v.push_back(make_pair(arr[i], 'a'));
	}
	
	for(int i=0; i<n; i++){
	    v.push_back(make_pair(dep[i], 'd'));
	}
	
	sort(v.begin(), v.end());
	
	int maxPlatformRequired=0, curPlatformRequired=0;
	
	for(pair<int, char>p : v){
	    if(p.second == 'a'){
	        curPlatformRequired++;
	    }else{
	        curPlatformRequired--;
	    }
	    maxPlatformRequired = max(maxPlatformRequired, curPlatformRequired);
	}
	
	return maxPlatformRequired;
	
}
