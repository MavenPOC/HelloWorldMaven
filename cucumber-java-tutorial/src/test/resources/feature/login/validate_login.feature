Feature: Validate Login
 To check whether login functionality is working or not
  
  Scenario Outline: Login Functionality

Given user navigates to login.jsp
When I try to login with user = 'Ashi07' and password = 'Oracle862' 
 Then I should see the name = 'Ashmita'
     
