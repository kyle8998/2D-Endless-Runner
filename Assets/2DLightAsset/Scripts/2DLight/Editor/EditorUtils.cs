namespace DynamicLight2D
{
	using System.Collections;
	using System.Collections.Generic;
	using System.Text.RegularExpressions;
	using System.IO;
	using UnityEngine;
	using UnityEditor;

	public class EditorUtils : Editor {

		public static EditorUtils editorUtils;

		internal static string relativepath = null;

		//EditorUtils();


		public static string getMainRelativepath () {

			if(editorUtils == null)
			{
				editorUtils = (EditorUtils) ScriptableObject.CreateInstance("EditorUtils");
			}

			if (relativepath != null)
			{
				return relativepath;
			}else
			{



				MonoScript ms = MonoScript.FromScriptableObject(editorUtils);
				string m_ScriptFilePath = AssetDatabase.GetAssetPath( ms );


				//If 2DDL FREE
				string _name = "Scripts/2DLight/Editor/" + Path.GetFileName(m_ScriptFilePath);

				//If 2DDL PRO
				//string _name = "2DLight/Editor/" + Path.GetFileName(m_ScriptFilePath);

				Regex rex = new Regex(_name);
				string result = rex.Replace(m_ScriptFilePath, "", 1);

				relativepath = result;
				return relativepath;
			}
		}




	}

}


