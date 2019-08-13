//Manual testing? 100 URLs needed for manual testing. Can someone create test data?


public void testUnit2() {
    	String url = ""
    	UrlValidator validTest = new UrlValidator();
    	//url is invalid and therefore the message will be printed.
    	assertFalse("url is valid.", validTest.isValid(url); 
    }
                    
public void firstPartitionTest() {
		System.out.println("\n Testing Schemes Partition:\n");
		String[] testSchemes = {"http://", "", "https://"};
		UrlValidator schemeArray = new UrlValidator(testSchemes, 0);
		for (int i = 0; i < testSchemes.length; i++) {
			String currentScheme = testSchemes[i];
			System.out.println("\nTesting " + currentScheme);
			boolean valid = schemeArray.isValidScheme(currentScheme);
			if (valid == false && i == 1) {
				System.out.println("Failed, invalid scheme\n");
			}
			else {
				System.out.println("All schemes are valid\n");
			}
		}
	}
}
                    
public void secondPartitionTest() {
		System.out.println("\n Testing Authority Partition:\n");
		String[] testAuthority = {"www.google.com", "", "23"};
		UrlValidator authorityArray = new UrlValidator(testAuthority, 0);
		for (int i = 0; i < testAuthority.length; i++) {
			String currentAuthority = testAuthority[i];
			System.out.println("\nTesting " + currentAuthority);
			boolean valid = authorityArray.isValidAuthority(currentAuthority);
			if (valid == false && i == 1 || valid == false && i == 2) {
				System.out.println("Failed, invalid authority\n");
			}
			else {
				System.out.println("All authority are valid\n");
			}
		}
	}
}            
                    
public void thirdPartitionTest() {
		System.out.println("\n Testing Port Partition:\n");
		String[] testPort = {"www.google.com:80", "", "www.google:-80"};
		UrlValidator portArray = new UrlValidator(testPort, 0);
		for (int i = 0; i < testPort.length; i++) {
			String currentPort = testPort[i];
			System.out.println("\nTesting " + currentPort);
			boolean valid = portArray.isValidPort(currentPort);
			if (valid == false && i == 1 || valid == false && i == 2) {
				System.out.println("Failed, invalid port\n");
			}
			else {
				System.out.println("All port are valid\n");
			}
		}
	}
}   
                    
public void fourthPartitionTest() {
		System.out.println("\n Testing Path Partition:\n");
		String[] testPath = {"/..", "testing", "/../"};
		UrlValidator pathArray = new UrlValidator(testPath, 0);
		for (int i = 0; i < testPath.length; i++) {
			String currentPath = testPath[i];
			System.out.println("\nTesting " + currentPath);
			boolean valid = pathArray.isValidPort(currentPath);
			if (valid == false && i == 1) {
				System.out.println("Failed, invalid path\n");
			}
			else {
				System.out.println("All path are valid\n");
			}
		}
	}
}                      
    
public void fifthPartitionTest() {
		System.out.println("\n Testing Queries Partition:\n");
		String[] testQueries = {" ", "", "/"};
		UrlValidator queriesArray = new UrlValidator(testQueries, 0);
		for (int i = 0; i < testQueries.length; i++) {
			String currentQueries = testQueries[i];
			System.out.println("\nTesting " + currentQueries);
			boolean valid = queriesArray.isValidPort(currentQueries);
			if (valid == false && i == 2) {
				System.out.println("Failed, invalid queries\n");
			}
			else {
				System.out.println("All queries are valid\n");
			}
		}
	}
}   
                   
    
