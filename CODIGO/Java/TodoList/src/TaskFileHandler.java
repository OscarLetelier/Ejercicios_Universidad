import java.io.*;
import java.util.ArrayList;
import java.util.List;

public class TaskFileHandler {
    private static final String FILE_NAME = "tasks.txt";

    // Metodo para guardar las tareas en un archivo
    public static void saveTasks(List<Task> tasks) {
        try (ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream(FILE_NAME))) {
            oos.writeObject(tasks);
        } catch (IOException e) {
            System.out.println("Error al guardar las tareas: " + e.getMessage());
        }
    }

    // Metodo para cargar las tareas desde un archivo
    public static List<Task> loadTasks() {
        try (ObjectInputStream ois = new ObjectInputStream(new FileInputStream(FILE_NAME))) {
            return (List<Task>) ois.readObject();
        } catch (IOException | ClassNotFoundException e) {
            System.out.println("Error al cargar las tareas o archivo no encontrado.");
            return new ArrayList<>();
        }
    }
}
