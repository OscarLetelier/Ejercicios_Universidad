import java.io.Serializable;

public class Task  implements Serializable {
    private String title;
    private String description;
    private boolean isCompleted;

    //Constructor para inicializar el titulo y descripcion de la tarea
    public Task(String title, String description) {
        this.title = title;
        this.description = description;
        this.isCompleted = false; // Por defecto, la tarea esta pendiente
    }


    //Metodos getters y setters para los atributos
    public String getTitle() {
        return title;
    }
    public void setTitle(String title) {
        this.title = title;
    }

    public String getDescription() {
        return description;
    }
    public void setDescription(String description){
        this.description = description;
    }

    public boolean isCompleted(){
        return isCompleted;
    }

    //Metodo para marcar la tarea como completada
    public void markAsCompleted(){
        this.isCompleted = true;
    }

    //Metodo para representar la tarea en formato de texto
    @Override
    public String toString(){
        return "[ " + (isCompleted ? "Completada" : "Pendiente") +  " ] " + title + ": " + description;
    }
}
