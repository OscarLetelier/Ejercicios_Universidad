import java.util.Scanner;
import java.util.List;

public class Main {
    private static TaskManager taskManager = new TaskManager();

    public static void main(String[] args) {
        loadTasks(); //Se utiliza el metodo para cargar las tareas desde el archivo .txt
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\n=== Menú de Lista de Tareas ===");
            System.out.println("1. Añadir tarea");
            System.out.println("2. Eliminar tarea");
            System.out.println("3. Editar tarea");
            System.out.println("4. Marcar tarea como completada");
            System.out.println("5. Ver todas las tareas");
            System.out.println("6. Ver tareas completadas");
            System.out.println("7. Ver tareas pendientes");
            System.out.println("8. Guardar y salir");
            System.out.print("Selecciona una opción: ");
            int option = scanner.nextInt();
            scanner.nextLine();

            switch (option) {
                case 1 -> addTask(scanner);
                case 2 -> removeTask(scanner);
                case 3 -> editTask(scanner);
                case 4 -> markTaskAsCompleted(scanner);
                case 5 -> displayTasks(taskManager.getAllTasks());
                case 6 -> displayTasks(taskManager.getTasks(true));
                case 7 -> displayTasks(taskManager.getTasks(false));
                case 8 -> {
                    saveTasks();
                    System.out.println("Tareas guardadas.");
                    System.out.println("|--------------------------|");
                    System.out.println("Saliendo.... ");
                    scanner.close();
                    return;
                }
                default -> System.out.println("Opción inválida. Inténtalo de nuevo.");
            }
        }
    }

    private static void addTask(Scanner scanner) {
        System.out.print("Título de la tarea: ");
        String title = scanner.nextLine();
        System.out.print("Descripción de la tarea: ");
        String description = scanner.nextLine();
        taskManager.addTask(title, description);
    }

    private static void removeTask(Scanner scanner) {
        System.out.print("Índice de la tarea a eliminar: ");
        int index = scanner.nextInt();
        taskManager.removeTask(index);
    }

    private static void editTask(Scanner scanner) {
        System.out.print("Índice de la tarea a editar: ");
        int index = scanner.nextInt();
        scanner.nextLine();  // Limpiar buffer
        System.out.print("Nuevo título: ");
        String newTitle = scanner.nextLine();
        System.out.print("Nueva descripción: ");
        String newDescription = scanner.nextLine();
        taskManager.editTask(index, newTitle, newDescription);
    }

    private static void markTaskAsCompleted(Scanner scanner) {
        System.out.print("Índice de la tarea a marcar como completada: ");
        int index = scanner.nextInt();
        taskManager.markTaskAsCompleted(index);
    }

    private static void displayTasks(List<Task> tasks) {
        if (tasks.isEmpty()) {
            System.out.println("No hay tareas para mostrar.");
        } else {
            for (int i = 0; i < tasks.size(); i++) {
                System.out.println(i + ". " + tasks.get(i));
            }
        }
    }

    private static void saveTasks() {
        TaskFileHandler.saveTasks(taskManager.getAllTasks());
    }

    private static void loadTasks() {
        taskManager = new TaskManager();
        taskManager.getAllTasks().addAll(TaskFileHandler.loadTasks());
    }
}


