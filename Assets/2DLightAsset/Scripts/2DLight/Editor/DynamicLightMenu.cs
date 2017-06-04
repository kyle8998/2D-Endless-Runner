
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
namespace DynamicLight2D
{
	using UnityEngine;
	using UnityEditor;
	using System.Collections;
	using DynamicLight2D;
	
	public class DynamicLightMenu : Editor {
		
		static internal DynamicLight light;
		const string menuPath = "GameObject/2D Dynamic Light [Free]";
		private static string folderPath;
		
		
		[MenuItem ( menuPath + "/Lights/ ☀ Radial No Material ",false,21)]
		static void addRadialNoMat(){
			folderPath = DynamicLight2D.EditorUtils.getMainRelativepath();
			
			//Object prefab = AssetDatabase.LoadAssetAtPath(folderPath + "Prefabs/Lights/2DPointLight.prefab", typeof(GameObject));
			GameObject hex = new GameObject("Light2D"); //Instantiate(prefab, Vector3.zero, Quaternion.identity) as GameObject;
			light = hex.AddComponent<DynamicLight>();
			light.layer = 255;
			hex.transform.position = new Vector3(0,0,0);

		}
		
		[MenuItem ( menuPath + "/Lights/ ☀ Radial Procedural Gradient ",false,31)]
		static void addRadialGradient(){
			folderPath = DynamicLight2D.EditorUtils.getMainRelativepath();
			
			Material mate = AssetDatabase.LoadAssetAtPath(folderPath + "Materials/LightMaterialGradient.mat", typeof(Material)) as Material;
			GameObject hex = new GameObject("Light2D"); //Instantiate(prefab, Vector3.zero, Quaternion.identity) as GameObject;
			light = hex.AddComponent<DynamicLight>();
			light.layer = 255;
			hex.transform.position = new Vector3(0,0,0);
			light.lightMaterial = mate;
		}
		
		[MenuItem ( menuPath + "/Lights/ ☀ Pseudo Spot Light ",false,41)]
		static void addPseudo(){
			folderPath = DynamicLight2D.EditorUtils.getMainRelativepath();
			
			Object prefab = AssetDatabase.LoadAssetAtPath(folderPath + "Prefabs/Lights/2DPseudoSpotLight.prefab", typeof(GameObject));
			GameObject hex = Instantiate(prefab, Vector3.zero, Quaternion.identity) as GameObject;
			hex.transform.position = new Vector3(0,0,0);
			hex.name = "2DRadialGradientPoint";
			light = hex.GetComponent<DynamicLight>();
			//light.layer = 255;
		}
		
		
		#region Casters Zone
		
		[MenuItem ( menuPath + "/Casters/Square",false,66)]
		static void addSquare(){
			folderPath = DynamicLight2D.EditorUtils.getMainRelativepath();
			Object prefab = AssetDatabase.LoadAssetAtPath(folderPath + "Prefabs/Casters/square.prefab", typeof(GameObject));
			GameObject hex = Instantiate(prefab, Vector3.zero, Quaternion.identity) as GameObject;
			hex.transform.position = new Vector3(5,0,0);
			//hex.layer = LayerMask.NameToLayer("shadows");
			hex.name = "Square";
		}
		
		[MenuItem ( menuPath + "/Casters/Hexagon",false,67)]
		static void addHexagon(){
			folderPath = DynamicLight2D.EditorUtils.getMainRelativepath();
			Object prefab = AssetDatabase.LoadAssetAtPath(folderPath + "Prefabs/Casters/hexagon.prefab", typeof(GameObject));
			GameObject hex = Instantiate(prefab, Vector3.zero, Quaternion.identity) as GameObject;
			hex.transform.position = new Vector3(5,0,0);
			//hex.layer = LayerMask.NameToLayer("shadows");
			hex.name = "Hexagon";
		}
		
		[MenuItem ( menuPath + "/Casters/Pacman",false,68)]
		static void addPacman(){
			folderPath = DynamicLight2D.EditorUtils.getMainRelativepath();
			Object prefab = AssetDatabase.LoadAssetAtPath(folderPath + "Prefabs/Casters/pacman.prefab", typeof(GameObject));
			GameObject hex = Instantiate(prefab, Vector3.zero, Quaternion.identity) as GameObject;
			hex.transform.position = new Vector3(5,0,0);
			//hex.layer = LayerMask.NameToLayer("shadows");
			hex.name = "Pacman";
		}
		[MenuItem ( menuPath + "/Casters/Star",false,69)]
		static void addStar(){
			folderPath = DynamicLight2D.EditorUtils.getMainRelativepath();
			Object prefab = AssetDatabase.LoadAssetAtPath(folderPath + "Prefabs/Casters/star.prefab", typeof(GameObject));
			GameObject hex = Instantiate(prefab, Vector3.zero, Quaternion.identity) as GameObject;
			hex.transform.position = new Vector3(5,0,0);
			//hex.layer = LayerMask.NameToLayer("shadows");
			hex.name = "Star";
		}
		
		
		#endregion
		
	}
}


