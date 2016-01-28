package test.ut.java.com.javacodegeeks;

import org.junit.Assert;
import org.junit.Test;

import main.java.com.hascode.tutorial.cucumber.login.action.SampleExample;

public class SimpleTest {
	
	@Test
	public void test() {
		SampleExample example = new SampleExample();
		example.addInteger(10);
		example.addInteger(100);
		Assert.assertEquals(example.getSize(), 2);
	}
}
