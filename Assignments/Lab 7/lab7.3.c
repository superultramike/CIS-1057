#include <stdio.h>

const int max_size = 10; // DECLARE MAX SIZE as 10.

int fget_point_mass(FILE *fp,float location_matrix[max_size][max_size],float mass_vector[max_size]);
void center_grav(float location_matrix[max_size][max_size],float mass_vector[max_size],int n,float center_of_gravity[3]);
void fwrite_point_mass(FILE* fp,float location_matrix[max_size][max_size],float mass_vector[max_size],int n,float center_of_gravity[3]);

int main() {
	float location_matrix[max_size][max_size]; // DECLARE LOCATION MATRIX
	float mass_vector[max_size];
	int n; // DECLARE ELEMENT AMOUNT
	float center_of_gravity[3]; // DECLARE CENTER OF GRAVITY

	FILE *fp; // FILE POINTER
	n = fget_point_mass(fp,location_matrix,mass_vector); // CALL FUNCTION
	center_grav(location_matrix,mass_vector,n,center_of_gravity); // CALL FUNCTION
	fwrite_point_mass(fp,location_matrix,mass_vector,n,center_of_gravity); // CALL FUNCTION
	return 0;
}

int fget_point_mass(FILE *fp,float location_matrix[max_size][max_size],float mass_vector[max_size]) {
	int p;
	p = fopen("input.txt", "r"); // OPEN "input.txt" FOR WRITING
	int n; // DECLARE POINT MASSES
	int row_index,column_index; // DECLARE ROW INDEX AND COLUMN INDEX

	if(fp != NULL) { // VERIFIES THAT FILE CAN READ
		fscanf(fp,"%d",&n); // SAVES INPUT
		while(!feof(fp )) {
			for(row_index=0; row_index<n; row_index++) { // SCAN ROW INDEX
				for(column_index=0; column_index<n; column_index++) { // SCAN COLUMN INDEX
					if(column_index==n-1) // since last column contain mass once column index reaches n-1
						fscanf(fp,"%f",&mass_vector[row_index]); // SAVES INPUT
					else
						fscanf(fp,"%f",&location_matrix[row_index][column_index]); // SAVE ELSEWHERE
				}
			}
		}
		fclose(fp);
	}
	return n;
}

void center_grav(float location_matrix[max_size][max_size],float mass_vector[max_size],int n,float center_of_gravity[3]) {
	float total_mass=0.0; // DECLARE TOTAL MASS
	int i,j; // DECLARE I AND J TO HOLD POINTS

	for(i=0; i<n; i++) {
		total_mass = total_mass + mass_vector[i]; // FINAL TOTAL MASS
		for(i=0; i<3; i++) { // COLLECT 3 ELEMENTS
			float point_sum = 0.0; // DECLARE POINT SUM PER COLUMN
			for(j=0; j<n; j++) { // SCAN COLUMN
				point_sum = point_sum + location_matrix[j][i]*mass_vector[j]; // MAIN EQUATION
			}
			center_of_gravity[i] = point_sum/total_mass; // ADDITIONAL EQUATION
		}
	}
}

void fwrite_point_mass(FILE* fp,float location_matrix[max_size][max_size],float mass_vector[max_size],int n,float center_of_gravity[3]) {
	fp = fopen("output.txt", "w"); // OPEN "output.txt" FOR WRITING
	float total_mass=0.0; // DECLARE TOTAL MASS TO HOLD MASS

	for(int i=0; i<n; i++) {
		total_mass = total_mass + mass_vector[i];
		fprintf(fp,"x y z m"); // OUTPUT IN SPECIFIC FORMAT
		int row_index,column_index; // DECLARE ROWS AND COLUMNS
		for(row_index=0; row_index<n; row_index++) { // GO THROUGH ROW INDEX
			fprintf(fp,"\n"); // PRINT NEW LINE
			for(column_index=0; column_index<n; column_index++) { // SCAN EACH COLUMN INDEX
				if(column_index==n-1) { // IF IT'S THE LAST ELEMENT GO TO NEXT COLUMN
					fprintf(fp,"%f",mass_vector[row_index]);
				}
				else { // OTHERWISE ACCESS ARRAY
					fprintf(fp,"%.3f\t", location_matrix[row_index][column_index]);
				}
			}
		}
    }
    fprintf(fp,"\nTotal mass: %.3f,", total_mass); // write Total mass to file.
    fprintf(fp,"\nCenter of Gravity: Cx Cy Cz"); // write Center of Gravity to file.
    fprintf(fp,"\n%.3f\t%.3f\t%.3f", center_of_gravity[0], center_of_gravity[1], center_of_gravity[2]); // write Center of Gravity to file.
    fclose(fp); // close file pointer.
}
