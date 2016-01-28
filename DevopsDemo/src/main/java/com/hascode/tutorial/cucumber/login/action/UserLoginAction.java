package main.java.com.hascode.tutorial.cucumber.login.action;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.apache.struts.action.Action;
import org.apache.struts.action.ActionForm;
import org.apache.struts.action.ActionForward;
import org.apache.struts.action.ActionMapping;

import main.java.com.hascode.tutorial.cucumber.login.dao.UserLoginDAO;
import main.java.com.hascode.tutorial.cucumber.login.form.UserLoginForm;

public class UserLoginAction extends Action {
	public ActionForward execute(ActionMapping mapping, ActionForm form,
			HttpServletRequest request, HttpServletResponse response)
			throws Exception {
		HttpSession ses = request.getSession(true);

		UserLoginForm registerForm = (UserLoginForm) form;
		String userName = registerForm.getUserName();
		String password = registerForm.getPassword();
		UserLoginDAO dao = new UserLoginDAO();
		String name=dao.validateData(userName, password);
		
		if(name!=null)
		
			return mapping.findForward("success");
		
		else 
			return mapping.findForward("errors");
		
	}
}
