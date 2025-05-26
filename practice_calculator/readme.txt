Welcome to my calculator!
Here are my steps taken to create this:

Step 1: Install desktop Development with C++
Step 2: Make sure to include c++/CLI Support for v(version) build tools from individual components
Step 3: Opening Visual Studio and start with a CLR Empty Project (.NET framework)
Step 4: Go to Project properties, linker, System, and change the subsystem to Windows
Step 5: In Advanced under linker, change the Entry point to main.
Step 6: Right click on your practice application header in the solution explorer
Step 7: Add a new item, and under visual C++ click on UI.
Step 8: Click and add the windows form.
Step 9: If an error pops up, close it. 
Step 10: You should have a new form now. 

Step 11: This was added to the Calculator.cpp

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args) 
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	practicecalculator::Calculator form;
	Application::Run(% form);
}


Step 12: Now, if a form isn't shown in the MyForm.h[Design] tab at the top, reload your IDE. 
Step 13: You can click on your MyForm.h[Design] and use the toolbox to add buttons/text/anything else to it. 
Step 14: Adding any buttons/text/anything from the toolbox will create a new class in the MyForm.cpp that can be modified. 

Step 15: Adding a button: 
	Once you add a button, you can go to it's properties and modify it's events in the event viewer (Lightening bolt)
	Alternatively, you can go into the button code in it's specific class and modify that instead. 