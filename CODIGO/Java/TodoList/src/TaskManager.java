import java.util.ArrayList;
import java.util.List;

public class TaskManager {
    private List<Task> tasks;

    public TaskManager() {
        tasks = new ArrayList<>();
    }

    // Agregar una nueva tarea
    public void addTask(String title, String description) {
        tasks.add(new Task(title, description));
    }

    // Eliminar una tarea por su índice
    public void removeTask(int index) {
        if (isValidIndex(index)) {
            tasks.remove(index);
        } else {
            System.out.println("Índice inválido.");
        }
    }

    // Editar el título y la descripción de una tarea
    public void editTask(int index, String newTitle, String newDescription) {
        if (isValidIndex(index)) {
            Task task = tasks.get(index);
            task.setTitle(newTitle);
            task.setDescription(newDescription);
        } else {
            System.out.println("Índice inválido.");
        }
    }

    // Marcar una tarea como completada
    public void markTaskAsCompleted(int index) {
        if (isValidIndex(index)) {
            tasks.get(index).markAsCompleted();
        } else {
            System.out.println("Índice inválido.");
        }
    }

    // Obtener todas las tareas
    public List<Task> getAllTasks() {
        return tasks;
    }

    // Filtrar tareas por estado (pendientes o completadas)
    public List<Task> getTasks(boolean onlyCompleted) {
        List<Task> filteredTasks = new ArrayList<>();
        for (Task task : tasks) {
            if (task.isCompleted() == onlyCompleted) {
                filteredTasks.add(task);
            }
        }
        return filteredTasks;
    }

    // Validar si el índice de una tarea es válido
    private boolean isValidIndex(int index) {
        return index >= 0 && index < tasks.size();
    }
}
