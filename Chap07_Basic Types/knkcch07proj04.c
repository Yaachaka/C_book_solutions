/*
@@@@ PROGRAM NAME: knkcch07proj04.c
@@@@ FLAGS: -std=c99
@@@@ PROGRAM STATEMENT: Write a program that translates an alphabetic phone 
number into numeric form:
	Enter phone number: CALLATT
	2255288
(In case you don't have a telephone nearby, here are the letters on the keys: 
2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone 
number contains non-alphabetic characters (digits or punctuation, for example), 
leave them unchanged:
	Enter phone number: 1-800-COL-LECT
	1-800-265-5328
You may assume that any letters entered by the user are upper case.
*/
#include<stdio.h>
#include<ctype.h>  //toupper().
//------------------------START OF MAIN()--------------------------------------
int main(void)
{
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	
	char c,c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14;
	c=c1=c2=c3=c4=c5=c6=c7=c8=c9=c10=c11=c12=c13=c14='\0';  //Initializing all character variables to null.
	
	printf("Enter phone number: ");
	
	if((c=toupper(getchar()))!='\n')  //Start of if for character c1
	{
		if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
		{
			if(c>='A'&&c<='Z')
				switch(c)
				{
					case 'A':case 'B':case 'C':c1='2';break;
					case 'D':case 'E':case 'F':c1='3';break;
					case 'G':case 'H':case 'I':c1='4';break;
					case 'J':case 'K':case 'L':c1='5';break;
					case 'M':case 'N':case 'O':c1='6';break;
					case 'P':case 'R':case 'S':c1='7';break;
					case 'T':case 'U':case 'V':c1='8';break;
					case 'W':case 'X':case 'Y':c1='9';break;
				}
			else
				c1=c;
		}
		if((c=toupper(getchar()))!='\n')  //Start of if for character c2
		{
			if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
			{
				if(c>='A'&&c<='Z')
					switch(c)
					{
						case 'A':case 'B':case 'C':c2='2';break;
						case 'D':case 'E':case 'F':c2='3';break;
						case 'G':case 'H':case 'I':c2='4';break;
						case 'J':case 'K':case 'L':c2='5';break;
						case 'M':case 'N':case 'O':c2='6';break;
						case 'P':case 'R':case 'S':c2='7';break;
						case 'T':case 'U':case 'V':c2='8';break;
						case 'W':case 'X':case 'Y':c2='9';break;
					}
				else
					c2=c;
			}
			if((c=toupper(getchar()))!='\n')  //Start of if for character c3
			{
				if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
				{
					if(c>='A'&&c<='Z')
						switch(c)
						{
							case 'A':case 'B':case 'C':c3='2';break;
							case 'D':case 'E':case 'F':c3='3';break;
							case 'G':case 'H':case 'I':c3='4';break;
							case 'J':case 'K':case 'L':c3='5';break;
							case 'M':case 'N':case 'O':c3='6';break;
							case 'P':case 'R':case 'S':c3='7';break;
							case 'T':case 'U':case 'V':c3='8';break;
							case 'W':case 'X':case 'Y':c3='9';break;
						}
					else
						c3=c;
				}
				if((c=toupper(getchar()))!='\n')  //Start of if for character c4
				{
					if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
					{
						if(c>='A'&&c<='Z')
							switch(c)
							{
								case 'A':case 'B':case 'C':c4='2';break;
								case 'D':case 'E':case 'F':c4='3';break;
								case 'G':case 'H':case 'I':c4='4';break;
								case 'J':case 'K':case 'L':c4='5';break;
								case 'M':case 'N':case 'O':c4='6';break;
								case 'P':case 'R':case 'S':c4='7';break;
								case 'T':case 'U':case 'V':c4='8';break;
								case 'W':case 'X':case 'Y':c4='9';break;
							}
						else
							c4=c;
					}
					if((c=toupper(getchar()))!='\n')  //Start of if for character c5
					{
						if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
						{
							if(c>='A'&&c<='Z')
								switch(c)
								{
									case 'A':case 'B':case 'C':c5='2';break;
									case 'D':case 'E':case 'F':c5='3';break;
									case 'G':case 'H':case 'I':c5='4';break;
									case 'J':case 'K':case 'L':c5='5';break;
									case 'M':case 'N':case 'O':c5='6';break;
									case 'P':case 'R':case 'S':c5='7';break;
									case 'T':case 'U':case 'V':c5='8';break;
									case 'W':case 'X':case 'Y':c5='9';break;
								}
							else
								c5=c;
						}
						if((c=toupper(getchar()))!='\n')  //Start of if for character c6
						{
							if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
							{
								if(c>='A'&&c<='Z')
									switch(c)
									{
										case 'A':case 'B':case 'C':c6='2';break;
										case 'D':case 'E':case 'F':c6='3';break;
										case 'G':case 'H':case 'I':c6='4';break;
										case 'J':case 'K':case 'L':c6='5';break;
										case 'M':case 'N':case 'O':c6='6';break;
										case 'P':case 'R':case 'S':c6='7';break;
										case 'T':case 'U':case 'V':c6='8';break;
										case 'W':case 'X':case 'Y':c6='9';break;
									}
								else
									c6=c;
							}
							if((c=toupper(getchar()))!='\n')  //Start of if for character c7
							{
								if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
								{
									if(c>='A'&&c<='Z')
										switch(c)
										{
											case 'A':case 'B':case 'C':c7='2';break;
											case 'D':case 'E':case 'F':c7='3';break;
											case 'G':case 'H':case 'I':c7='4';break;
											case 'J':case 'K':case 'L':c7='5';break;
											case 'M':case 'N':case 'O':c7='6';break;
											case 'P':case 'R':case 'S':c7='7';break;
											case 'T':case 'U':case 'V':c7='8';break;
											case 'W':case 'X':case 'Y':c7='9';break;
										}
									else
										c7=c;
								}
								if((c=toupper(getchar()))!='\n')  //Start of if for character c8
								{
									if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
									{
										if(c>='A'&&c<='Z')
											switch(c)
											{
												case 'A':case 'B':case 'C':c8='2';break;
												case 'D':case 'E':case 'F':c8='3';break;
												case 'G':case 'H':case 'I':c8='4';break;
												case 'J':case 'K':case 'L':c8='5';break;
												case 'M':case 'N':case 'O':c8='6';break;
												case 'P':case 'R':case 'S':c8='7';break;
												case 'T':case 'U':case 'V':c8='8';break;
												case 'W':case 'X':case 'Y':c8='9';break;
											}
										else
											c8=c;
									}
									if((c=toupper(getchar()))!='\n')  //Start of if for character c9
									{
										if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
										{
											if(c>='A'&&c<='Z')
												switch(c)
												{
													case 'A':case 'B':case 'C':c9='2';break;
													case 'D':case 'E':case 'F':c9='3';break;
													case 'G':case 'H':case 'I':c9='4';break;
													case 'J':case 'K':case 'L':c9='5';break;
													case 'M':case 'N':case 'O':c9='6';break;
													case 'P':case 'R':case 'S':c9='7';break;
													case 'T':case 'U':case 'V':c9='8';break;
													case 'W':case 'X':case 'Y':c9='9';break;
												}
											else
												c9=c;
										}
										if((c=toupper(getchar()))!='\n')  //Start of if for character c10
										{
											if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
											{
												if(c>='A'&&c<='Z')
													switch(c)
													{
														case 'A':case 'B':case 'C':c10='2';break;
														case 'D':case 'E':case 'F':c10='3';break;
														case 'G':case 'H':case 'I':c10='4';break;
														case 'J':case 'K':case 'L':c10='5';break;
														case 'M':case 'N':case 'O':c10='6';break;
														case 'P':case 'R':case 'S':c10='7';break;
														case 'T':case 'U':case 'V':c10='8';break;
														case 'W':case 'X':case 'Y':c10='9';break;
													}
												else
													c10=c;
											}
											if((c=toupper(getchar()))!='\n')  //Start of if for character c11
											{
												if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
												{
													if(c>='A'&&c<='Z')
														switch(c)
														{
															case 'A':case 'B':case 'C':c11='2';break;
															case 'D':case 'E':case 'F':c11='3';break;
															case 'G':case 'H':case 'I':c11='4';break;
															case 'J':case 'K':case 'L':c11='5';break;
															case 'M':case 'N':case 'O':c11='6';break;
															case 'P':case 'R':case 'S':c11='7';break;
															case 'T':case 'U':case 'V':c11='8';break;
															case 'W':case 'X':case 'Y':c11='9';break;
														}
													else
														c11=c;
												}
												if((c=toupper(getchar()))!='\n')  //Start of if for character c12
												{
													if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
													{
														if(c>='A'&&c<='Z')
															switch(c)
															{
																case 'A':case 'B':case 'C':c12='2';break;
																case 'D':case 'E':case 'F':c12='3';break;
																case 'G':case 'H':case 'I':c12='4';break;
																case 'J':case 'K':case 'L':c12='5';break;
																case 'M':case 'N':case 'O':c12='6';break;
																case 'P':case 'R':case 'S':c12='7';break;
																case 'T':case 'U':case 'V':c12='8';break;
																case 'W':case 'X':case 'Y':c12='9';break;
															}
														else
															c12=c;
													}
													if((c=toupper(getchar()))!='\n')  //Start of if for character c13
													{
														if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
														{
															if(c>='A'&&c<='Z')
																switch(c)
																{
																	case 'A':case 'B':case 'C':c13='2';break;
																	case 'D':case 'E':case 'F':c13='3';break;
																	case 'G':case 'H':case 'I':c13='4';break;
																	case 'J':case 'K':case 'L':c13='5';break;
																	case 'M':case 'N':case 'O':c13='6';break;
																	case 'P':case 'R':case 'S':c13='7';break;
																	case 'T':case 'U':case 'V':c13='8';break;
																	case 'W':case 'X':case 'Y':c13='9';break;
																}
															else
																c13=c;
														}
														if((c=toupper(getchar()))!='\n')  //Start of if for character c14
														{
															if(c=='-' || (c>='0'&&c<='9') || (c>='A'&&c<='Z'))
															{
																if(c>='A'&&c<='Z')
																	switch(c)
																	{
																		case 'A':case 'B':case 'C':c14='2';break;
																		case 'D':case 'E':case 'F':c14='3';break;
																		case 'G':case 'H':case 'I':c14='4';break;
																		case 'J':case 'K':case 'L':c14='5';break;
																		case 'M':case 'N':case 'O':c14='6';break;
																		case 'P':case 'R':case 'S':c14='7';break;
																		case 'T':case 'U':case 'V':c14='8';break;
																		case 'W':case 'X':case 'Y':c14='9';break;
																	}
																else
																	c14=c;
															}
															
														}  //End of if for c14
													
													}  //End of if for c13
												
												}  //End of if for c12
												
											}  //End of if for c11
								
										}  //End of if for c10
									
									}  //End of if for c9
								
								}  //End of if for c8
							
							}  //End of if for c7
							
						}  //End of if for c6
						
					}  //End of if for c5
				
				}  //End of if for c4
			
			}  //End of if for c3
		
		}  //End of if for c2
		
	}  //End of if for c1
	
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14);
	
	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	return 0;
}
//-------------------------END OF MAIN()---------------------------------------
//---------------------------------------------------------------------------
/*
OUTPUT:
@@@@ Trial 1:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter phone number: callatt
2255288
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 2:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter phone number: CALLATT
2255288
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 3:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter phone number: 1-800-col-lect
1-800-265-5328
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 4:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter phone number: 1-800-COL-lect
1-800-265-5328
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
@@@@ Trial 5:
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
Enter phone number: 2345gfdh
23454334
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
//---------------------------------------------------------------------------