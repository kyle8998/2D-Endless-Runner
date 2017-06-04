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
	
	
	
	
	[CustomEditor (typeof (DynamicLight))] 
	//[CanEditMultipleObjects]
	
	public class DynamicLightEditor : Editor {
		
		static internal DynamicLight light;
		SerializedProperty version, lmaterial, radius, segments, layer;
		private GUIStyle titleStyle, subTitleStyle, bgStyle, btnStyle, adTextStyle;
		
		int adCount;
		
		internal void initStyles(){
			titleStyle = new GUIStyle(GUI.skin.label);
			titleStyle.fontSize = 15;
			titleStyle.fontStyle = FontStyle.Bold;
			titleStyle.alignment = TextAnchor.MiddleLeft;
			titleStyle.margin = new RectOffset(4, 4, 10, 0);
			
			subTitleStyle = new GUIStyle(GUI.skin.label);
			subTitleStyle.fontSize = 13;
			subTitleStyle.fontStyle = FontStyle.Bold;
			subTitleStyle.alignment = TextAnchor.MiddleLeft;
			subTitleStyle.margin = new RectOffset(4, 4, 10, 0);
			
			adTextStyle = new GUIStyle(GUI.skin.box);
			adTextStyle.fontSize = 11;
			adTextStyle.normal.textColor = Color.magenta;
			adTextStyle.fontStyle = FontStyle.Bold;
			adTextStyle.alignment = TextAnchor.MiddleLeft;
			adTextStyle.margin = new RectOffset(4, 4, 10, 0);
			adTextStyle.stretchWidth = true;
			
			bgStyle = new GUIStyle(GUI.skin.button);
			bgStyle.margin = new RectOffset(4, 4, 0, 4);
			bgStyle.padding = new RectOffset(1, 1, 1, 2);
			bgStyle.fixedHeight = 30f;
			
			
		}
		
		internal void OnEnable(){
			
			light = target as DynamicLight;
			
			version = serializedObject.FindProperty ("version");
			lmaterial = serializedObject.FindProperty ("lightMaterial");
			radius = serializedObject.FindProperty ("lightRadius");
			segments = serializedObject.FindProperty ("lightSegments");
			layer = serializedObject.FindProperty ("layer");
			
			adCount  =  Random.Range(0,7);
		}
		
		
		
		
		
		
		public override void OnInspectorGUI () {
			if (light == null){return;}
			
			initStyles ();
			
			EditorGUI.BeginChangeCheck();
			{
				
				float fradius = radius.floatValue;
				if(fradius < 0)
					fradius *= -1;
				
				if(radius.floatValue != fradius){
					radius.floatValue = fradius;
				}
				
				string v = version.stringValue;
				
				GUILayout.Label("2DDL Setup", titleStyle);
				
				EditorGUILayout.Separator();
				GUILayout.Label("Main Prefs", subTitleStyle);
				
				
				
				EditorGUILayout.Separator();
				
				EditorGUILayout.PropertyField(radius,new GUIContent("Radius", "Size of light radius"));
				EditorGUILayout.IntSlider(segments, 3, 20, new GUIContent("Segments","Quantity of line segments is used for build mesh render of 2DLight. 3 at least"));
				EditorGUILayout.PropertyField(lmaterial, new GUIContent("Light Material", "Material Object used for render into light mesh"));
				EditorGUILayout.Separator();
				
				EditorGUILayout.PropertyField(layer,new GUIContent("Layer", "Layer"));
				EditorGUILayout.Separator();
				
				string adText = "";
				adTextStyle.normal.textColor = Color.black;
				if (adCount == 0 ){
					//adTextStyle.normal.textColor = Color.green;
					adText = "Need Spots Lights or angular restriction?";
				}else if (adCount == 1){
					adText = "You need to Edit while you're designing?";
					//adTextStyle.normal.textColor = Color.green;
				}else if (adCount == 2){
					adText = "Need Fog of War setup?";
				}else if (adCount == 3){
					adText = "Need Field of View detection?";
					//adTextStyle.normal.textColor = Color.cyan;
				}else if (adCount == 4){
					adText = "You need More speed for Mobile target?";
					//adTextStyle.normal.textColor = Color.yellow;
				}else if (adCount == 5){
					adText = "Need reveal hidden objects with Lights 2D?";
				}else if (adCount == 6){
					adText = "Need cookies 2D Lights or texturized 2D Lights?";
				}else if (adCount == 7){
					adText = "Need Fast support?";
					//adTextStyle.normal.textColor = Color.cyan;
				}
				
				#if UNITY_TEAM_LICENSE
				//adTextStyle.normal.textColor = Color.blue;
				#endif
				
				GUILayout.Label(adText, adTextStyle);
				
				EditorGUILayout.Separator();
				EditorGUILayout.Separator();

				
				
				if(GUILayout.Button("Get Premium",bgStyle)){
					UnityEditorInternal.AssetStore.Open("/content/25933");
					//Application.OpenURL("https://www.assetstore.unity3d.com/en/#!/content/25933");
				}
				
				
				GUILayout.Label("Info", subTitleStyle);
				EditorGUILayout.HelpBox("2DDL Free version: " + v, MessageType.None);
				EditorGUILayout.Separator();
				
				
				EditorGUILayout.Separator();
				if (GUILayout.Button("Support")){
					Application.OpenURL("mailto:info@martinysa.com");
				}
				
				
			}
			
			
			
			
			if (EditorGUI.EndChangeCheck())
			{
				EditorUtility.SetDirty(target);
				applyChanges();
			}
			
			
			
			
		}
		
		
		void applyChanges(){
			Undo.RecordObject(light, "Apply changes");
			
			foreach (DynamicLight s in targets) {
				s.lightMaterial = (Material)lmaterial.objectReferenceValue;
				s.lightRadius =  radius.floatValue; 
				s.lightSegments = segments.intValue; 
				s.layer = layer.intValue;
				
			}
			
			
		}
		
		
		
	}

}