import java.util.LinkedList;
import java.util.List;

public class PythonListToJavaLinkedList {

    public static void main(String[] args) {
        // Example input Python list
        Object[] pythonList = {1, 2, "a", new Object[]{3, 4, "b"}, 5};

        // Convert Python list to Java LinkedList
        LinkedList<Object> javaLinkedList = convertPythonListToJavaLinkedList(pythonList);

        // Print the resulting Java LinkedList
        System.out.println(javaLinkedList);
    }

    private static LinkedList<Object> convertPythonListToJavaLinkedList(Object[] pythonList) {
        LinkedList<Object> javaLinkedList = new LinkedList<>();

        for (Object element : pythonList) {
            if (element instanceof Object[]) {
                // Handle nested Python list
                LinkedList<Object> nestedList = convertPythonListToJavaLinkedList((Object[]) element);
                javaLinkedList.add(nestedList);
            } else {
                // Add non-nested element to the LinkedList
                javaLinkedList.add(element);
            }
        }

        return javaLinkedList;
    }
}
