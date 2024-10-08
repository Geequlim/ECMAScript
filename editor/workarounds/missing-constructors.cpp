/* All types are generated in editor_tools, but constructors are missing we need to add them manually. */

#include "../editor_tools.h"

Dictionary create_missing_constructors() {
	Dictionary dict;
	dict["Vector2"] = "\t\tconstructor(x?: number, y?: number);\n"
					  "\t\tconstructor(v: Vector2);\n";
	dict["Rect2"] = "\t\tconstructor(from: Rect2);\n"
					"\t\tconstructor(x?: number, y?: number, w?: number, h?: number);\n"
					"\t\tconstructor(pos: Vector2, size: Vector2)\n";
	dict["Vector3"] = "\t\tconstructor(x?: number, y?: number, z?: number);\n"
					  "\t\tconstructor(v: Vector3);\n";
	dict["Basis"] = "\t\tconstructor();\n"
					"\t\tconstructor(from: Basis);\n"
					"\t\tconstructor(from: Quaternion);\n"
					"\t\tconstructor(from: Vector3);\n"
					"\t\tconstructor(axis: Vector3, phi: number);\n"
					"\t\tconstructor(x_axis: Vector3, y_axis: Vector3, z_axis: Vector3);\n";
	dict["Transform3D"] = "\t\tconstructor(from: Transform3D);\n"
						  "\t\tconstructor(from: Basis);\n"
						  "\t\tconstructor(from: Quaternion);\n"
						  "\t\tconstructor(from: Transform2D);\n"
						  "\t\tconstructor(basis: Basis, origin: Vector3);\n"
						  "\t\tconstructor(x_axis?: Vector3, y_axis?: Vector3, z_axis?: Vector3, origin?: Vector3);\n";
	dict["Basis"] = "\t\tconstructor();\n"
					"\t\tconstructor(from: Transform2D);\n"
					"\t\tconstructor(from: Transform3D);\n"
					"\t\tconstructor(x_axis: Vector2, y_axis: Vector2, origin: Vector2);\n"
					"\t\tconstructor(rotation: number, position: Vector2);\n";
	dict["Color"] = "\t\tconstructor(from: Color);\n"
					"\t\tconstructor(from: string);\n"
					"\t\tconstructor(from: number);\n"
					"\t\tconstructor(r?: number, g?: number, b?: number, a?: number);\n";
	dict["Plane"] = "\t\tconstructor(from: Plane);\n"
					"\t\tconstructor(v1: Vector3, d: number);\n"
					"\t\tconstructor(v1: Vector3, v2: Vector3, v3: Vector3);\n"
					"\t\tconstructor(a?: number, b?: number, c?: number, d?: number);\n";
	dict["Quaternion"] =
			"\t\tconstructor(from: Quaternion);\n"
			"\t\tconstructor(from: Basis);\n"
			"\t\tconstructor(euler: Vector3);\n"
			"\t\tconstructor(axis: Vector3, angle: number);\n"
			"\t\tconstructor(x?: number, y?: number, z?: number, w?: number);\n";
	dict["AABB"] =
			"\t\tconstructor(from: AABB);\n"
			"\t\tconstructor(position?: Vector3, size?: Vector3);\n";
	dict["PackedByteArray"] =
			"\t\tconstructor(source?: number[]);\n"
			"\t\tconstructor(from: PackedByteArray);\n"
			"\t\tconstructor(from: ArrayBuffer);\n"
			"\t\tconstructor(from: DataView);\n"
			"\t\t[Symbol.iterator](): IterableIterator<number>;\n";
	dict["PackedColorArray"] =
			"\t\tconstructor(source?: Color[]);\n"
			"\t\tconstructor(from: PackedColorArray);\n"
			"\t\tconstructor(from: ArrayBuffer);\n"
			"\t\tconstructor(from: DataView);\n"
			"\t\t[Symbol.iterator](): IterableIterator<Color>;\n";
	dict["PackedInt32Array"] =
			"\t\tconstructor(source?: number[]);\n"
			"\t\tconstructor(from: PackedInt32Array);\n"
			"\t\tconstructor(from: ArrayBuffer);\n"
			"\t\tconstructor(from: DataView);\n"
			"\t\t[Symbol.iterator](): IterableIterator<number>;\n";
	dict["PackedFloat32Array"] =
			"\t\tconstructor(source?: number[]);\n"
			"\t\tconstructor(from: PackedFloat32Array);\n"
			"\t\tconstructor(from: ArrayBuffer);\n"
			"\t\tconstructor(from: DataView);\n"
			"\t\t[Symbol.iterator](): IterableIterator<number>;\n";
	dict["PackedStringArray"] =
			"\t\tconstructor(source?: string[]);\n"
			"\t\tconstructor(from: PackedStringArray);\n"
			"\t\t[Symbol.iterator](): IterableIterator<string>;\n";
	dict["PackedVector2Array"] =
			"\t\tconstructor(source?: Vector2[]);\n"
			"\t\tconstructor(from: PackedVector2Array);\n"
			"\t\tconstructor(from: ArrayBuffer);\n"
			"\t\tconstructor(from: DataView);\n"
			"\t\t[Symbol.iterator](): IterableIterator<Vector2>;\n";
	dict["PackedVector3Array"] =
			"\t\tconstructor(source?: Vector3[]);\n"
			"\t\tconstructor(from: PackedVector3Array);\n"
			"\t\tconstructor(from: ArrayBuffer);\n"
			"\t\tconstructor(from: DataView);\n"
			"\t\t[Symbol.iterator](): IterableIterator<Vector3>;\n";
	return dict;
}

Dictionary JavaScriptPlugin::DECLARATION_CONSTRUCTORS = create_missing_constructors();
