Here is your note **properly formatted, corrected, and clean**:

---

## **Array Notes (C#)**

* An **array** is a **fixed, sequential collection** of elements of the **same type**.
* You can think of an array as a **collection of variables** stored in continuous memory.

### **Array Declaration in C#**

```csharp
type[] name = new type[size];
```

### **Key Properties**

* **Array dimensions and their lengths are fixed** when the array instance is created.
  → You **cannot change the size** of an array during its lifetime.
* **Default values**:

  * Numeric arrays → initialized to **0**
  * Reference-type arrays → initialized to **null**
* **Arrays are zero-indexed** (index starts from **0 to n-1**).
* **Array type can be any type**, including:

  * Primitive types
  * User-defined types
  * Other arrays (e.g., jagged arrays)

### **Jagged Arrays**

* Jagged arrays are **arrays of arrays**:

```csharp
int[][] jagged = new int[3][];
```

### **Arrays Are Reference Types**

* **All array types** in C# are **reference types**.
* Internally, all arrays derive from the **abstract base class `System.Array`**.
* Arrays are **objects**, not just memory blocks.

### **Useful Properties / Methods**

* `.Rank` → returns the **number of dimensions** of the array.
* `.Length` → returns the **total number of elements**.
* `GetLength(dimension)` → returns the size of a specific dimension.

---

If you want, I can convert this into **exam-style notes**, **slides**, or a **cheat sheet PDF**.










Here you go — **all the most important, exam-friendly points** **in TRUE/FALSE or MCQ style** based on your entire lecture.
I made them **clean, short, and directly testable**.

---

# ✅ **Important Points for TRUE/FALSE + MCQ (Highly Likely to Come)**

---

# **📌 C# BASIC CONCEPTS**

### **Strong Typing**

* C# is a **strongly typed** language.
* Every variable, constant, expression, and method parameter has a type.

### **Type Safety**

* The compiler checks types at **compile time** to ensure operations are type-safe.
* Example: `bool` cannot be implicitly converted to `int`.

---

# **📌 VALUE TYPES vs REFERENCE TYPES**

### **Value Types**

* Store the **actual value** in memory.
* All value types derive from **System.ValueType** → which derives from `System.Object`.
* Examples: int, float, char, bool, struct, enum.
* Two categories: **Predefined** and **User-defined** (struct, enum).

### **Reference Types**

* Store a **reference (address)** to data, not the data itself.
* Changing one reference affects all references to the same object.
* Examples: class, interface, array, string, object.

### **Memory Behavior**

* Value types → stored in **stack**.
* Reference types → reference in stack, data in **heap**.

---

# **📌 DATA TYPES (Sizes) — VERY LIKELY MCQs**

* `byte` = 0 to 255
* `sbyte` = -128 to 127
* `short` = -32768 to 32767
* `ushort` = 0 to 65535
* `int` = 32-bit
* `long` = 64-bit
* `char` = 16-bit Unicode
* `float` = 32-bit
* `double` = 64-bit
* `decimal` = 128-bit
* `bool` = true/false only

---

# **📌 COMMON TYPE SYSTEM (CTS)**

### CTS ensures:

* All .NET languages share the **same type system**.
* Every type ultimately derives from **System.Object**.
* All types are either:

  * **value types**
  * **reference types**

---

# **📌 COMMON LANGUAGE SPECIFICATION (CLS)**

* CLS = subset of CTS that **every .NET language must support**.
* Important for cross-language interoperability.
* Example:

  * `uint` is available in C#, **not CLS-compliant**, not available in VB.NET.

---

# **📌 NAMESPACES AND TYPES**

* Types are organized inside **namespaces**.

* Fully qualified type example:
  `Zoo.Mammal.Dog`

* Types contain members:

  * fields
  * methods
  * constructors
  * properties
  * events
  * indexers

---

# **📌 CASTING & TYPE CONVERSION**

### Implicit Conversion

* Safe, no data loss.
* Example: int → long, derived → base.

### Explicit Conversion (Cast)

* Risk of data loss, requires casting.
* Example: double → int, base → derived.

### Runtime Exceptions

* Some casts compile but fail at runtime (InvalidCastException).

### **is** operator

* Checks compatibility → returns **bool**.

### **as** operator

* Safe cast → returns **null** if cast fails.
* More efficient than `is` for obtaining actual object.

---

# **📌 CLASS & OBJECT BASICS**

* Class is a **blueprint**.
* Objects are **instances** of a class.
* Classes are **reference types**.

### Types of Classes

* **Concrete** → can create objects.
* **Abstract** → cannot be instantiated.

---

# **📌 ACCESS MODIFIERS — EXAM FAVOURITE**

| Modifier           | Applies To      | Meaning                               |
| ------------------ | --------------- | ------------------------------------- |
| public             | types + members | accessible everywhere                 |
| private            | members only    | same class only (default for members) |
| protected          | members         | class + subclass                      |
| internal           | types + members | same assembly/project                 |
| protected internal | members         | protected + internal (union)          |

---

# **📌 CONSTRUCTORS**

### GENERAL RULES

* Constructor has **no return type** (not even void).
* Constructors run when object is created.
* If no constructor is written → **default constructor** is supplied by compiler.
* Constructors can be **overloaded**.

### TYPES OF CONSTRUCTORS

#### **1. Default Constructor**

* No parameters.
* Initializes numeric fields to **0**, strings/objects to **null**.

#### **2. Parameterized Constructor**

* Allows passing different values per object.

#### **3. Copy Constructor**

* Initializes a new object using another object's data.

#### **4. Static Constructor**

* Runs **only once**, automatically, before any object is created.
* Cannot take **parameters**.
* Cannot have **access modifiers**.
* Used to initialize static fields.

---

# **📌 DESTRUCTORS**

* Begin with `~ClassName()`.
* Non-deterministic (not guaranteed when they run).
* Used to release unmanaged resources (files, sockets).
* Internally converted to `Finalize()` method.

---

# **📌 FIELDS, PROPERTIES, VARIABLES**

### Field

* Declared inside class (but outside methods).

### Local Variable

* Declared inside methods/blocks.
* Exists only during method execution.

### **readonly**

* Can be assigned:

  * at declaration
  * OR inside constructor
* Runtime constant.
* Cannot be assigned outside constructor.

### **const**

* Must be assigned at declaration only.
* Compile-time constant.

---

# **📌 METHOD & CONSTRUCTOR OVERLOADING**

* Same name, **different parameter list**.
* Return type alone **cannot** overload a method.

---

# **📌 PARAMS, REF, OUT (Expected MCQ/TF)**

### `params`

* Variable number of arguments.

### `ref`

* Requires variable **initialized before** passing.

### `out`

* Variable **must be assigned inside** the method.

---

# **📌 ENUM & STRUCT**

### STRUCT

* Value type.
* Cannot inherit from classes.
* Can have constructors (but not default parameterless one).

### ENUM

* Set of named constants.
* Underlying type is **int** by default.

---

# **📌 STRING**

* `string` is **immutable**.
* Reference type with value type behavior.

---

# Done.

---

If you want, I can also make:

✅ **Predicted Exam MCQs**
✅ **Predicted True/False**
✅ **Fill in the blanks**
✅ **Short notes cheat sheet**

Just tell me!
