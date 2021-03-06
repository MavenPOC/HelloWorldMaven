package test.it.java.feature.login;

import static org.hamcrest.MatcherAssert.assertThat;
import static org.hamcrest.core.IsEqual.equalTo;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;

import main.java.com.hascode.tutorial.cucumber.book.Book;
import main.java.com.hascode.tutorial.cucumber.book.Library;
import main.java.com.hascode.tutorial.cucumber.login.action.UserLoginAction;
import main.java.com.hascode.tutorial.cucumber.login.dao.UserLoginDAO;

import cucumber.api.Format;
import cucumber.api.java.en.Given;
import cucumber.api.java.en.Then;
import cucumber.api.java.en.When;

@Category(Integration.class)
public class ValidateITLoginSteps {
	private UserLoginDAO loginDao =new UserLoginDAO() ;
	private UserLoginAction loginAction =new UserLoginAction() ;
	String result="";

	@Given("^user navigates to login.jsp$")
	public void given_I_navigate_to_the_mock_application(){
		System.out.println("HI");
	}

	@When("^I try to login with user '(.+)' and password '(.+)'$")
	public void when_I_try_to_login(final String username,final String password) throws Exception{		
		result =loginDao.validateData(username, password);
	}

	@Then("I should see the name '(.+)'$")
	public void nameFound(String name) {
		assertThat(result, equalTo(name));
	}

	
}
