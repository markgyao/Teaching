-- https://www.sql-practice.com/


SELECT 
	concat(dr.first_name," ",dr.last_name) as dr_name, 
    concat (pt.first_name," ", pt.last_name) as pt_name,
    ad.admission_date, ad.diagnosis
    FROM admissions as ad
join doctors as dr, patients as pt on
dr.doctor_id=ad.attending_doctor_id and pt.patient_id =ad.patient_id
order by dr_name, admission_date


Select attending_doctor_id, count(*) as adm_counts from admissions
group by attending_doctor_id