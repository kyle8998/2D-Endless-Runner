namespace DynamicLight2D
{
	using UnityEngine;
	using System.Collections;
	
	public class interface_touch2: MonoBehaviour {
		
		GameObject cLight;
		GameObject cubeL;
		Camera cam;
		DynamicLight _2ddl;
		int __layer;
		
		//GUIText UIlights;
		//GUIText UIvertex;
		
		
		[HideInInspector] public static int vertexCount;
		
		int lightCount = 1;
		
		
		bool _mouseClick;
		bool _ctrlDown;
		
		
		void Start () {
			
			cam = GameObject.Find("Camera").GetComponent<Camera>();
			
			cLight = GameObject.Find("2DLight");
			
			StartCoroutine(LoopUpdate());
		}
		
		void Update()
		{
			_mouseClick = Input.GetMouseButtonDown (0);
			_ctrlDown = Input.GetKey(KeyCode.LeftControl);
		}
		
		// Update is called once per frame
		IEnumerator LoopUpdate () {
			
			while (true){
				//cLight = GameObject.Find("2DLight");
				//if(Input.GetAxis("Horizontal")){
				//light.transform.position = new Vector3 (Input.mousePosition.x -Screen.width*.5f, Input.mousePosition.y -Screen.height*.5f);
				Vector3 pos = cLight.transform.position;
				pos.x += Input.GetAxis ("Horizontal") * 30f * Time.deltaTime;
				pos.y += Input.GetAxis ("Vertical") * 30f * Time.deltaTime;
				
				
				
				if (_mouseClick) {
					
					Vector2 p = cam.ScreenToWorldPoint(Input.mousePosition);
					
					if(_ctrlDown == true){
						_2ddl =  cLight.GetComponent<DynamicLight>();
						__layer = _2ddl.layer;
						Material m = new Material(_2ddl.lightMaterial as Material); 
						
						
						GameObject nLight = new GameObject();
						nLight.transform.parent = cLight.transform;
						
						_2ddl = nLight.AddComponent<DynamicLight>();
						//m.color = new Color(Random.Range(0f,1f),Random.Range(0f,1f),Random.Range(0f,1f));
						_2ddl.lightMaterial = m;
						nLight.transform.position = p;
						_2ddl.lightRadius = 40;
						_2ddl.layer = __layer;
						
						GameObject quad = GameObject.CreatePrimitive(PrimitiveType.Quad);
						quad.transform.parent = nLight.transform;
						quad.transform.localPosition = Vector3.zero;
						lightCount++;
						
					}
					
					
					
				}
				
				
				yield return new WaitForEndOfFrame();
				cLight.transform.position = pos;
				
				
				
			}
			
		}
		
		
		
	}

}