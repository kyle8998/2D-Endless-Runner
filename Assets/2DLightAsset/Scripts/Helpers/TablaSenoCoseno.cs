/****************************************************************************
 Copyright (c) 2014 Martin Ysa

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

using UnityEngine;
using System.Collections;

public class TablaSenoCoseno{

	static bool hasInstanced = false;

	// -- almaceno seno y cose pos cuestiones de performance --//
	public static float []SenArray;
	public static float []CosArray;




	public static void initSenCos(){
		if(hasInstanced == false){
			SenArray = new float[360];
			CosArray = new float[360];
			
			for(int i = 0; i< 360; i++){
				SenArray[i] = Mathf.Sin(i*Mathf.Deg2Rad);
				CosArray[i] = Mathf.Cos(i*Mathf.Deg2Rad);
			}

			hasInstanced = true;
		}
			
	}

}
