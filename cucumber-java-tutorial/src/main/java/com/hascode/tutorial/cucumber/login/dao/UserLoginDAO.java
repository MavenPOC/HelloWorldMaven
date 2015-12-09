package com.hascode.tutorial.cucumber.login.dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;

public class UserLoginDAO {
	public String validateData(String userName,String password) throws Exception {
		String name="";
		System.out.println("jdbc connection");
		Class.forName("com.mysql.jdbc.Driver");
		Connection con = DriverManager.getConnection(
				"jdbc:mysql://localhost:3306/strutsdb", "root", "Oracle862");

		try {

			try {
				Statement st = con.createStatement();
				ResultSet rs = st.executeQuery("Select first_name from test.users where username="
								+ userName
								+ "and password="
								+ password+"')");
				name=rs.getString(1);
				return name;
			} catch (SQLException ex) {
				System.out.println("SQL statement is not executed!" + ex);
			}
			con.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
		return name;
	}
}
