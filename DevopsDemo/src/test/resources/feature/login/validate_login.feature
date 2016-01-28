Feature: Validate Login
 To check whether login functionality is working or not
  
  Scenario: Login Functionality
			Given user navigates to login.jsp
			When I try to login with user 'Ashi' and password 'Oracle' 
 			Then I should see the name 'Ashmita'
     
